#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    int days = get_int("Days in month: \n");
    int pennies = get_int("Pennies on first day: \n");
    pennies = (pennies * pow(2, 31));
    float dollars = (pennies / 100.0);
    printf("$%i\n", dollars)
}