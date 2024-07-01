#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int length = get_int("Enter length: ");
    int numbers[length];
    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;
    int count_4 = 0;
    int sumOdds = 0;
    int sumEvens = 0;
    int temp;

    for (int i = 0; i < length; i++)
    {
        numbers[i] = get_int("Enter numbers: ");
    }

    for (int i = 0; i < length; i++)
    {
        // odds
        if (numbers[i] % 2 == 1)
        {
            int odds = numbers[i];
            if (odds == 1)
            {
                count_1 = count_1 + 1;
            }
            if (odds == 3)
            {
                count_3 = count_3 + 1;
            }
        }
        // evens
        else
        {
            int evens = numbers[i];
            if (evens == 2)
            {
                count_2 = count_2 + 1;
            }
            if (evens == 4)
            {
                count_4 = count_4 + 1;
            }
        }
    }
    sumOdds = count_1 + count_3;
    sumEvens = count_2 + count_4;

    // sort   
    for (int pos = 0; pos < length; pos++)
    {
        int minPos = pos;
        {
            for(int i = pos; i < length; i++)
            {
                if (numbers[i] < numbers[minPos])
                {
                    minPos = i;
                }
            }

            temp = numbers[pos];
            numbers[pos] = numbers[minPos];
            numbers[minPos] = temp;
        }
    }

    // print odds
    printf("Odds: ");
    if (sumOdds == 0)
    {
        printf("None\n");
    }
    else 
    {

        if (count_1 >= 1)
        {
            printf("1 ");
        }
        if (count_3 >= 1)
        {
            printf("3 ");
        }
        printf("\n");
    }

    // print evens
    printf("Evens: ");
    if (sumEvens == 0)
    {
        printf("None\n");
    }
    else 
    {
        if (count_2 >= 1)
        {
            printf("2 ");
        }
        if (count_4 >= 1)
        {
            printf("4 ");
        }
        printf("\n");
    }
}