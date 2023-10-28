#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int pennies;
    pennies = get_int("Pennies: ");
    int days;
    days = get_int("Days: ");
    float dollars;
    dollars = pow(pennies, days);
    dollars = (dollars / 100.0);
    printf("Dollars: %.2f\n", dollars);
}