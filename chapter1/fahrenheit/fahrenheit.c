#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float C = get_float("Temperature in Celcius: ");
    float F = ((C*9)/5)+32;
    printf("The Temperature in Fahrenheit is %.1F°\n", F);
}