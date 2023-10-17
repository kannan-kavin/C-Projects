#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    long CCN;
    CCN = get_long("Enter Credit Card Number: ");
    int d = 0;
    do
    {
        (CCN / 10);
        (d++);
    }
    while (CCN < 0);
    printf("CNN:%ld d:%i", CCN, d);
}