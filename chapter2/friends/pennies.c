#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./pennies <# Days> <# Pennies>\n");
        return 1;
    }
    int days = atoi(argv[1]);
    if (days < 28 || days > 31)
    {
        long long pennies = (atoi(argv[2]) * pow(2, days));
        double dollars = (pennies / 100.0);
        printf("$%.2f\n", dollars);
        return 0;
    }
}