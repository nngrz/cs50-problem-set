#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number;
    do
    {
        number = get_int("Height:");
    }
    while (number <= 0);

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            if (j <= number - i)
            {
                printf(" ");
            }
            else 
            {
                printf("#");
            }
        }
        printf("  ");
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf ("\n");
    }
}