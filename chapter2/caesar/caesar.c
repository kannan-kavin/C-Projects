#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

string caesariphy(string plain);

int main(int argc, string argv[])
{
    // Get a key from the user
    if (argc != 2 || atoi(argv[1]) <= 0)
    {
        printf("Usage: ./caesar <key>\n");
        return 1;
    }
    string plain = get_string("plaintext: ");
    // printf("%c\n", plain[0]);
    printf("ciphertext: %s\n", cipher);
}

string caesariphy(string plain);
{
    for (int i = 0, n = strlen(plain); i < n, i++)
    // increment through each letter and convert it using the key (argv[1])
    char character = (plain[i]);
    if ((argv[1] + character) > 122)
    {
        
    }
    if (character <= 122 || character >= 97)
    {

    }
}