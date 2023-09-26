#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int P = (1 % 5);
    printf("The total number of coins in change you need is %.0i\n", P);
}