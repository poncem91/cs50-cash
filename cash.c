#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    int count = 0;

    //asks input for change owed
    do
    {
        change = get_float("Change: ");
    }
    while (change < 0);

    //change to cents
    int cents = round(change * 100);

    //counts quarters
    if (cents >= 25)
    {
        count += (cents / 25);
        cents = cents % 25;
    }

    //counts dimes
    if (cents >= 10)
    {
        count += (cents / 10);
        cents = cents % 10;
    }

    //counts nickels
    if (cents >= 5)
    {
        count += (cents / 5);
        cents = cents % 5;
    }

    //counts pennies
    if (cents >= 1)
    {
        count += (cents / 1);
        cents = cents % 1;
    }

    //prints number of coins
    printf("%d\n", count);
}