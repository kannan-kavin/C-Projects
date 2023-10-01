#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int Start = get_int("Starting Population: ");
    do
    {
        int End = get_int("Ending Population: ");
        do
        {
            int Now = (Start + (Start / 3) - (Start / 4));
        }
        while (End > Start);
    }
    while (Start > 9);
}
