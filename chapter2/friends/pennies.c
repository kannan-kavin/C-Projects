#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./pennies <# of Pennies and # of Days>\n");
        return 1;
    }
    int pennies = (pennies * pow(2, argv[1]));
    float dollars = (pennies / 100.0);
    printf("$%i\n", dollars)
}