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
    int n = strlen(plain);

    for (int i = 0; i < n; i++)
    // increment through each letter and convert it using the key (argv[1])
    char c = (plain[i]);
    if (c <= 122 && c >= 97)
    {
        cipher[i] = 96 + ((c - 96 + key) % 26);
    }
    if (character >= 65 && character <=90)
    {
        cipher[i] = 64 + ((c - 64 + key) % 26);
    }
    printf("ciphertext: %s\n", cipher);
}