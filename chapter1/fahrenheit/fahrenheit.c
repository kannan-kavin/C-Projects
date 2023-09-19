#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float CTemp = get_float("Temperature in Celcius: ");
    decimal FTemp = 32 + %f * 1.8;
    printf("The Temperature in Fahrenheit is %f°\n", FTemp);
}