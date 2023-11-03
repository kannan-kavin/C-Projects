#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Get a key from the user
    if (argc != 2 || atoi(argv[1]) <= 0)
    {
        printf("Usage: ./caesar <key>\n");
        return 1;
    }
    get_string("plaintext: ")
}