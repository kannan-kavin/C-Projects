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
}
