#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    int key = (atoi(argv[1]) % 26);
    for (int i = 0, n = strlen(plain); i < n, i++)
    // increment through each letter and convert it using the key (argv[1])
    char character = (plain[i]);
    if (character <= 122 && character >= 97)
    {
        cipher[i] = 96 + ((character - 96 + key) % 26);
    }
    if (character >= 65 && character <=90 )
    {
        cipher[i] = 65 + ((character - 65 + key) % 26);
    }
    printf("ciphertext: %s\n", cipher);
}