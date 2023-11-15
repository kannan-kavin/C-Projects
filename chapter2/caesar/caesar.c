#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar <key>\n");
        return 1;
    }
    // Command line recieves only the key
    string keychecker = (argv[1]);
    for (int i = 0; i < strlen(keychecker); i++)
    {
        if (isdigit(keychecker[i]) == 0)
        {
            printf("Usage: ./caesar <key>\n");
            return 1;
        }
    }
    // Get a VALID key from the user by checking each character in the key
    string text = get_string("plaintext: ");
    // Debugging: printf("%c\n", plain[0]);
    for (int i = 0; i < strlen(text); i++)
    {
        // increment through each letter and convert it using the key (argv[1])
        char c = (text[i]);
        int key = (atoi(argv[1]) % 26);
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