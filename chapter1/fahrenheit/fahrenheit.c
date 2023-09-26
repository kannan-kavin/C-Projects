#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float C = get_float("Temperature in Celcius: ");
    // C represents the Temperature in Celcius that is inputted
    float F = ((C * 9) / 5) + 32;
    // F represents the Temperature in Fahrenheit that is returned
    printf("The Temperature in Fahrenheit is %.1F°\n", F);
}