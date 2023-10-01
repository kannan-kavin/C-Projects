/*
 * cash.c by Kavin Kannan
 * 10/1/2023
 * Calculate least number of coins to make change
 */

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change;
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0);
// C is Change inputed by user
    int helper = round(C * 100);
    // helper is a variable which turns decimal inputs into a whole number
    int Q = (helper / 25);
    // Q is Max Quarters needed
    int R1 = helper % 25;
    // R1 is the remainder of change in cents still needed after we've taken out all of our Quarters
    int D = (R1 / 10);
    // D is Max Dimes needed
    int R2 = (R1 % 10);
    // R2 is the remainder of change in cents still needed after we've taken out all of our Quarters AND Dimes
    int N = (R2 / 5);
    // N is Max Nickles needed
    int P = (R2 % 5);
    // P is the remainder of change in cents still needed after we've taken out all of our Quarters AND Dimes AND Nickles
    int S = Q + D + N + P;
    // S is the sum of all of our max coins needed in each category, returning the answer of max coins
    printf("The total number of coins in change you need is %.0i\n", S);
}