// collect 2 int from user, call a function that swaps those values, print the swap (swapping must take place in a function)
#include <cs50.h>
#include <stdio.h>

void swap(int *num1, int *num2);

int main(void)
{
    int num1 = get_int("Integer 1: ");
    int num2 = get_int("Integer 2: ");
    printf("num1: %i num2: %i\n", num1, num2);

    printf("Swapping!\n");
    swap(&num1, &num2);
    printf("num1: %i num2: %i\n", num1, num2);
}

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
