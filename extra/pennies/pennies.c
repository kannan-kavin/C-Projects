#include <cs50.h>
#include <math.h>
#include <stdio.h>

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
    dollars = (pennies * pow(2, days));
    dollars = (dollars / 100.0);
    printf("%.2f\n", dollars);
}