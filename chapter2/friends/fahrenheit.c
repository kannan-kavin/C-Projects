#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./fahrenheit <fahrenheit temperature>\n");
        return 1;
    }
    float celcius = atof(argv[1]);
    float fahrenheit = ((celcius * 9) / 5) + 32;
    printf("The Temperature in Fahrenheit is %.1F°\n", fahrenheit);
    return 0;
}