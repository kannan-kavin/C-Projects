/*
 * sumarray.c
 * Distro by Mr. Shoutis
 * Write the code for the function sum_array using the prototype given on line ____
 *
 * Check50: check50 shoutiss/master/checks/sumarray
 * Submit50 submit50 shoutiss/master/checks/sumarray
 */



#include <stdio.h>
#include <cs50.h>

// Complete this function to sum the elemnts in an array
int sum_array(int a[], int length);


// DON'T CHANGE ANYTHING HERE
int main(void)
{
    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {2, 4, 6, 8, 10};
    int l1 = 5;
    int l2 = 5;

    printf("Array 1: %i  Array 2: %i\n", sum_array(a1, l1), sum_array(a2, l2));
}

int sum_array(int a[], int length)
{
    int sum = 0;
    for (int i=0; i < length; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}