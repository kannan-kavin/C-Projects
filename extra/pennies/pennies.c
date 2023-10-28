#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int pennies;
    do
    {
        pennies = get_int("Pennies: ");
    }
    while (pennies < 1);
    int days;
    do
    {
        days = get_int("Days: ");
    }
    while (days > 31 || days < 28);
    float dollars;
    dollars = pow(pennies, days);
    dollars = (dollars / 100.0);
    printf("%.2f\n", dollars);
}