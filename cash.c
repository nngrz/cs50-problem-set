#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // Calculate quaters (25)
    int quarters = calculate_quarters(cents);
    // printf("quarters = %d\n", quarters);

    cents = cents % 25;
    // printf("cents left = %d\n", cents);

    // Calculate dimes (10)
    int dimes = calculate_dimes(cents);
    // printf("dimes = %d\n", dimes);

    cents = cents % 10;
    // printf("cents left = %d\n", cents);

    // Calculate nickels (5)
    int nickels = calculate_nickels(cents);
    // printf("nickels = %d\n", nickels);

    cents = cents % 5;
    // printf("cents left = %d\n", cents);

    // Calculate pennies (1)
    int pennies = calculate_pennies(cents);
    // printf("pennies = %d\n", pennies);

    cents = cents % 1;
    // printf("cents left %d\n", cents);

    // Calculate total coins
    printf("%d\n", quarters + dimes + nickels + pennies);
}

int calculate_quarters(int cents)
{
    return cents / 25;
}

int calculate_dimes(int cents)
{
    return cents / 10;
}

int calculate_nickels(int cents)
{
    return cents / 5;
}

int calculate_pennies(int cents)
{
    return cents / 1;
}

