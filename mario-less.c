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

    for(int j = 1; j <= number; j++)
    {
        for (int i = 1; i <= number; i++)
        {
            if (i <= number - j)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }      

} 




/* 
void print_line(int size)
{
    for(int i = 0; i <= size; i++)
    {
        if (i <= size-1)
        {
            printf(" ");
        }
        else
        {
            printf("#");
        }
    }
    printf("\n");
}

void print_board(int size)
{
    for(int i = 0; i < size; i++)
    {
        print_line(size);
    }
}

int main()
{
    int size = get_int("size:");
    print_board(size);
}
*/
