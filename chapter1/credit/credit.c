#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long CCN;
    CCN = get_long("Enter Credit Card Number: ");
    if ((CCN / 1000000000000000 > 1))
    {
        //printf("MASTERCARD OR VISA\n");
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