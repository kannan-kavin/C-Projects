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
       float T = ((C * 100) / 25);
       printf("The total number of coins in change you need is %F\n", T);
}