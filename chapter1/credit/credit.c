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
            int check = 2 * ((floor(CCN % 100) / 10) + (floor(CCN % 10000) / 1000) + (floor(CCN % 1000000) / 100000) + (floor(CCN % 100000000) / 10000000) + (floor(CCN % 10000000000) / 1000000000) + (floor(CCN % 1000000000000) / 100000000000) + (floor(CCN % 100000000000000) / 10000000000000) + (floor(CCN % 10000000000000000) / 1000000000000000));
            printf("%i\n", check);
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