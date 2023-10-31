#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./pennies <# Days and # Pennies>\n");
        return 1;
    }
    if ((atoi(argv[1]) >= 28.0 || atoi(argv[1]) <= 31.0) && atoi(argv[2]) > 1.0)
    {
        int pennies = (atoi(argv[2]) * pow(2, atoi(argv[1])));
        float dollars = (pennies / 100.0);
        printf("$%.2F\n", dollars);
        return 0;
    }
}