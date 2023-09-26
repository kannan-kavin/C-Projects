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
       // C is Change inputed by user
        while (C < 0);
       float Q = ((C * 100) / 25);
       int help = (C * 100);
       int R1 = help % 25;
       float D = (R1 / 10);
       int R2 = (R1 % 10);
       float N = (R2 / 5);
       int P = (R2 % 5);
       int A = Q + D + N + P;
       printf("The total number of coins in change you need is %.0i\n", A);
}