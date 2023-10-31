#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./pennies <# of Pennies and # of Days>\n");
        return 1;
    }
    if ((atoi(argv[2]) >= 28 || atoi(argv[2]) <= 31) && atoi(argv[1]) > 1)
    {
        int pennies = (atoi(argv[1]) * pow(2, atoi(argv[2])));
        float dollars = (pennies / 100.0);
        printf("$%.2f\n", dollars);
    }
}