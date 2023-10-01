#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    int Start;
    do
    {
        Start = get_int("Starting Population: ");
    }
    while (Start < 9);
    int End;
    do
    {
        End = get_int("Ending Population: ");
    }
    while (End < Start);
    int Intermediate;
    for(int years = 0; Intermediate < End; years++);
    {
        Intermediate = (Start + floor(Start/3) - floor(Start/4));
    }
    printf("The number of years in order to reach the end population is %.0i\n", years);
}
