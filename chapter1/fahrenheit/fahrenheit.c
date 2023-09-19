#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float C = get_float("Temperature in Celcius: ");
    F = ((C*5)/9)+32;
    printf("The Temperature in Fahrenheit is %F°\n", F);
}