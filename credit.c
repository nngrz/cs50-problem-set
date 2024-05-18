#include <cs50.h>
#include <stdio.h>

int sumDigits(long number);
int firstTwo(long number);
int firstOne(long number);
int countSum(long number);
int countLenth(long number);


int main(void)
{
    long number = get_long("Enter number:");
    int sum = countSum(number);
    int length = countLenth(number);
    int twoNumber = firstTwo(number);


    // printf("countSum = %d\n", sum);
    // printf("firstTwo = %d\n", firstTwo(number));
    // printf("firstOne = %d\n", firstOne(number));

    if (sum % 10 != 0)
    {
       printf("INVALID\n"); 
    }
    // now define card type:
    // AMEX: American Express uses 15-digit numbers/ start with 34 or 37
    else if
    (
        length == 15 && 
        (twoNumber == 34 || twoNumber == 37)
    )
    {
        printf("AMEX\n");
    }
    // MASTERCARD: MasterCard uses 16-digit numbers/ start with 51, 52, 53, 54, or 55
    else if 
    (
        length == 16 && 
        (twoNumber == 51 || twoNumber == 52 || twoNumber == 53 || twoNumber == 54 || twoNumber == 55)
    )
    {
        printf("MASTERCARD\n");
    }
    // VISA: Visa uses 13- and 16-digit numbers/ start with 4
    else if 
    (
        (length == 13 || length == 16) && 
        firstOne(number) == 4
    )
    {
        printf("VISA\n");
    }
    // INVALID
    else
    {
        printf("INVALID\n");
    }
}

int sumDigits(long number) // number is always <= 18
{
    return (number / 10) + (number % 10);
} 

int firstTwo(long number)
{
    while (number > 100)
    {
        number = number / 10;
    }

    return number;
}

int firstOne(long number)
{
    while (number > 10) 
    {
        number = number / 10;
    }

    return number;
}

int countSum(long number)
{
    int sumEven = 0; 
    int sumOdd = 0; 
    int position = 1;

    do 
    {
        int digit = number % 10;  // digit = 3  // 
        number = number / 10; // number = 1
        if (position % 2 == 0) // position is even
        {
            int digits = digit * 2;
            sumEven = sumEven + sumDigits(digits);
        }
        else //position is odd
        {
            sumOdd = sumOdd + digit;
        }
        position = position + 1;
        // printf("position is %d\n", position);
        // printf("number = %d digit = %d\n", number, digit); 
    }
    while (number != 0);

    // printf("position = %d\n", position);
    // printf("sumEven: %d\n", sumEven);

    // printf("sumOdd: %d\n", sumOdd);
    // int sum = sumEven + sumOdd;
    return sumEven + sumOdd;
}

int countLenth(long number)
{
    int position = 1;

    while (number >= 10)
    {
        number = number / 10;
        position = position + 1;
    }

    return position;
}