/*
 * broken.c by Kavin Kannan
 * 10/6/2023
 * Attempts to find the sum of digits between two user entered numbers
 */

/*
 * Check for correctness - does it compile? Does it reject values?
 * check50 shoutiss/checks/master/broken
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // First num must be postive
    int num1;
    do
    {
        num1 = get_int("Positive integer: ");
    }
    while (num1 < 1);
    // Second num must be greater than first num
    int num2;
    do
    {
        num2 = get_int("Positive integer greater than the first: ");
    }
    while (num2 <= num1);
    // sum keeps track of overall sum adding the next number each time as i will keep repeating adding the next number until we
    // reach num2.
    int i;
    int sum;
    for (i = num1; i <= num2; i++)
    {
        sum = i + sum;
    }

    printf("Sum: %i\n", sum);
}