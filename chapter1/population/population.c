#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int Start = get_int("Starting population: ");
    while(9 < Start)
        ;
    int End = get_int("Ending population: ");
    while(Start < End)
        ;
    printf("%i\n", Start);
    printf("%i\n", End);
}