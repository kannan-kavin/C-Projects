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
       float Q = ((C * 100) / 25);
       int R = ((C * 100) % 25);
       float D = (R / 10);
       int R = (R % 10);
       float N = (R / 5);
       int P = (R % 5);
       int A = Q + D + N + P;
       printf("The total number of coins in change you need is %.0i\n", A);
}