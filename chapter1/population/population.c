#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    int Start
    int Start = get_int("Starting Population: ");
    do
    {
        int End = get_int("Ending Population: ");
        do
        {
            int Now = (Start + floor(Start / 3) - floor(Start / 4));
            printf("The amount of years it will take is: %.0i\n", Now)
        }
        while (End < Start);
    }
    while (Start < 9);
}
