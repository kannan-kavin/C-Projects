#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float C = get_float("Change owed: $");
    while (C < 0)
        ;
    // C is Change inputed by user
    int helper = (C * 100);
    // helper is a variable which turns decimal inputs into a whole number
    int Q = (helper / 25);
    // Q is Max Quarters needed
    int R1 = helper % 25;
    // R1 is the remainder of change in cents still needed after we've taken out all of our Quarters
    int D = (R1 / 10);
    // D is Max Dimes needed
    int R2 = (R1 % 10);
    // R2 is the remainder of change in cents still needed after we've taken out all of our Quarters AND Dimes
    int S = Q + D;
    printf("The total number of coins in change you need is %.0i\n", S);
}