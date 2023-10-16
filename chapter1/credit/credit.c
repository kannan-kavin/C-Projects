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
            int check1 = 2 * (floor(CCN % 100) / 10);
            int check2 = 2 * (floor(CCN % 10000) / 1000);
            int check3 = 2 * (floor(CCN % 1000000) / 100000);
            int check4 = 2 * (floor(CCN % 100000000) / 10000000);
            int check5 = 2 * (floor(CCN % 10000000000) / 1000000000);
            int check6 = 2 * (floor(CCN % 1000000000000) / 100000000000);
            int check7 = 2 * (floor(CCN % 100000000000000) / 10000000000000);
            int check8 = 2 * (floor(CCN % 10000000000000000) / 1000000000000000);
            printf("Each one is: %i, %i, %i, %i, %i, %i, %i, %i\n" check1, check2, check3, check4, check5, check6, check7, check8);
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