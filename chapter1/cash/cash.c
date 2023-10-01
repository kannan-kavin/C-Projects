/*
 * cash.c by Kavin Kannan
 * 10/1/2023
 * Calculate least number of coins to make change
 */

#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float change;
    do
    {
        change = get_float("Change owed: ");
    }
    while (change <= 0);
    // C is Change inputed by user (I also don't understand why it's while change is less than 0?)
    int helper = round(change * 100);
    // helper is a variable which turns decimal inputs into a whole number
    int quarter = (helper / 25);
    // quarter is Max Quarters needed
    int remainder1 = (helper % 25);
    // remainder1 is the remainder of change in cents still needed after we've taken out all of our Quarters
    int dime = (remainder1 / 10);
    // dime is Max Dimes needed
    int remainder2 = (remainder1 % 10);
    // remainder2 is the remainder of change in cents still needed after we've taken out all of our Quarters AND Dimes
    int nickle = (remainder2 / 5);
    // nickle is Max Nickles needed
    int penny = (remainder2 % 5);
    // penny is the remainder of change in cents still needed after we've taken out all of our Quarters AND Dimes AND Nickles
    int sum = (quarter + dime + nickle + penny);
    // sum is the sum of all of our max coins needed in each category, returning the answer of max coins
    printf("The total number of coins in change you need is %.0i\n", sum);
}