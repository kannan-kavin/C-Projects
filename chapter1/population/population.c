#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int Start = get_int("Starting population: ");
    int End = get_int("Ending population: ");
    while(9<Start<End)
        ;
    printf("%i\n", Start);
    printf("%i\n", End);
}