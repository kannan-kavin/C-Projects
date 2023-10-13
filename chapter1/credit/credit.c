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
        int VISA16 = (floor(CCN / 1000000000000000));
        int MASTERCARD16 = (floor(CCN / 100000000000000));
        if (VISA16 == 4)
        {
            //printf("VISA\n");
            
        }
        else if (MASTERCARD16 == 51 || MASTERCARD16 == 52 || MASTERCARD16 == 53 || MASTERCARD16 == 54 || MASTERCARD16 == 55)
        {
            //printf("MASTERCARD\n");
        }
        else
        {
            //printf("INVALID\n");
        }
    }
    else if ((CCN / 100000000000000) > 1)
    {
        //printf("AMERICAN EXPRESS\n");
    }
    else if ((CCN / 1000000000000) > 1)
    {
        //printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}