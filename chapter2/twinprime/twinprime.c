#include <cs50.h>
#include <stdio.h>

// done with Nishil

// What code do you have to add to the for loop so that the program prints all twin prime pairs under 100?
// Twin Prime Pair: 3, 5 or 5, 7 or 41,43 etc.
// Print each pair in the form prime1, prime2\n

// Check for correctness using: check50 shoutiss/checks/master/twinprime

bool is_prime(int n);

int main(void)
{

    for (int i = 3; i < 100; i++)
    {
        int j = i + 2;
        is_prime(i);
        if (is_prime(i))
        {
            if (is_prime(j))
            {
                printf("%i, %i\n", i, j);
            }
        }
    }
}

// DO NOT CHANGE THIS
bool is_prime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}