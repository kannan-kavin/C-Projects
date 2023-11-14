#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2 || scanf("%s", argv[1]) != 1)
    {
        printf("Usage: ./caesar <key>\n");
        return 1;
    }
    // Get a working key from the user
    string text = get_string("plaintext: ");
    // printf("%c\n", plain[0]);
    int key = (atoi(argv[1]) % 26);
    int n = strlen(text);
    for (int i = 0; i < n; i++)
    {
        // increment through each letter and convert it using the key (argv[1])
        char c = (text[i]);
        if (c <= 122 && c >= 97)
        {
            text[i] = 96 + ((c - 96 + key) % 26);
        }
        if (c >= 65 && c <= 90)
        {
            text[i] = 64 + ((c - 64 + key) % 26);
        }
    }
    printf("ciphertext: %s\n", text);
}