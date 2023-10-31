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
    if (arg[v] >= 28 || arg[v] <= 31)
    {
        int pennies = (atoi(argv[0]) * pow(2, atoi(argv[1])));
        float dollars = (pennies / 100.0);
        printf("$%i\n", dollars);
    }
}