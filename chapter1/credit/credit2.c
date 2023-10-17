#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    long CCN;
    CCN = get_long("Enter Credit Card Number: ");
    int d = 0;
    long determinant = CCN;
    while (determinant > 0)
    {
        d = d+1;
        determinant = (determinant / 10);
    }
    printf("determinant:%ld d:%i\n", determinant, d);
}