/*
 * cash.c by Kavin Kannan
 * 9/20/2023
 * Calculate least number of coins to make change
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
       float C = get_float("Change owed: $");
        while (C < 0);
       // C is Change inputed by user
       int helper = (C * 100);
       // helper is a variable which turns decimal inputs into a whole number
       float Q = (helper / 25);
       // Q is Max Quarters needed
       int R1 = help % 25;
       // R1 is the remainder of change in cents still needed after we've taken out all of our Quarters
       float D = (R1 / 10);
       // D is Max Dimes needed
       int R2 = (R1 % 10);
       // R2 is the remainder of change in cents still needed after we've taken out all of our Quarters AND Dimes
       float N = (R2 / 5);
       int P = (R2 % 5);
       int A = Q + D + N + P;
       printf("The total number of coins in change you need is %.0i\n", A);
}