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
    // d will keep track of digits in the Card Number while determinant helps that occur
    {
        d = d+1;
        determinant = (determinant / 10);
    }
    // printf("determinant:%ld d:%i\n", determinant, d);
    for(i = 0, )
    {
        CCN / 
    }

    if (d == 13)
    {
        printf("VISA\n");
    }
    else if (d == 15)
    {
        printf("AMERICAN EXPRESS\n");
    }
    else if (d == 16)
    {
        printf("VISA OR MASTERCARD\n");
    }
    else
    {
        printf("INVALID\n");
    }
}