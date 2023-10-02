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
    // This will repromt until our Starting Population Input is greater than 9
    int End;
    do
    {
        End = get_int("Ending Population: ");
    }
    while (End < Start);
    // This will reprompt until our Ending Population Input is greater than our Starting Population Input
    int years = 0;
    while(Start < End)
    {
        Start = (Start + floor(Start/3) - floor(Start/4));
        years++;
    }
    printf("Years: %.0i\n", years);
}
