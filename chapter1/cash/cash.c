/*
 * cash.c by Kavin Kannan
 * 9/20/2023
 * Calculate least number of coins to make change
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
       float change = get_float("Change owed: $");
        while (change > 0);
       float total = ((change * 100) / 25);
       printf("The total number of coins in change you need is %F\n", total);
}