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
        // increment through each letter and convert it using the key
        char c = (text[i]);
        int key = (atoi(argv[1]) % 26);
        if (c <= 122 && c >= 97)
        {
            text[i] = 97 + ((c - 97 + key) % 26);
        }
        // Shifting all Lowercase Letters
        if (c <= 90 && c >= 65)
        {
            text[i] = 65 + ((c - 65 + key) % 26);
        }
        // Shifting all Uppercase Letters
    }
    printf("ciphertext: %s\n", text);
}