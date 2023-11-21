#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution <key>\n");
        return 1;
    }
    // Command line recieves only a key 👌
    string key = (argv[1]);
    for (int i = 0; i < strlen(key); i++)
    {
        if ((isalpha(key[i]) == 0) || (strlen(key) != 26))
        {
            printf("Key must only contain 26 alphabetical characters.\n");
            // DEBUGGING: printf("%i\n", keychecker[i]);
            return 1;
        }
        // Checks for a 26 Letter key 👌
        for (int j = i; j < 26; j++)
        {
            if (key[i] == key[j])
            {
            printf("Key must not contain repeated characters.\n");
            return 1;
            }
        }
        // Checks for independence between letters
    }
    // Got a key with 26 INDEPENDENT CHARACTERS from the user
    string text = get_string("plaintext: ");
    for (int i = 0; i < strlen(text); i++)
    {
        char c = (text[i]);
        if (c <= 122 && c >= 97)
        {
            text[i] = tolower(key[c - 97]);
        }
        // Shifting all Lowercase Letters 👌
        if (c <= 90 && c >= 65)
        {
            text[i] = toupper(key[c - 65]);
        }
        // Shifting all Uppercase Letters 👌
    }
    // Incremented through each letter and converted it using the key 👌
    printf("ciphertext: %s\n", text);
}
