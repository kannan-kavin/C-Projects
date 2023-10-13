#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    long CCN;
    CCN = get_long("Enter Credit Card Number: ");
    if ((CCN / 1000000000000000 > 1))
    {
        //printf("MASTERCARD OR VISA\n");
        if ((floor(CCN / 1000000000000000) == 4))
        {
            printf("VISA\n");
        }
        else if ((floor CCN / 100000000000000 = 51 || 52 || 53 || 54 || 55))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if ((CCN / 100000000000000) > 1)
    {
        printf("AMERICAN EXPRESS\n");
    }
    else if ((CCN / 1000000000000) > 1)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}