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
    // Command line recieves only a key
    string keychecker = (argv[1]);
    for (int i = 0; i < strlen(keychecker); i++)
    {
        if (65 > (keychecker[i]) || (97 > (keychecker[i]) && (keychecker[i]) < 90) || 122 < (keychecker[i]) || strlen(keychecker) != 26)
        {
            printf("Key must only contain 26 alphabetical characters.\n");
            // DEBUGGING: printf("%i\n", keychecker[i]);
            return 1;
        }
        // Checks for an 26 letter key
        /*
        else (keychecker != )
        {
            printf("Key must not contain repeated characters.\n");
            return 1;
        }
        // Checks for independence between letters
        */
    }
    // Got a key with 26 INDEPENDENT CHARACTERS from the user
    string text = get_string("plaintext: ");
    for (int i = 0; i < strlen(text); i++)
    {
        // increment through each letter and convert it using the key
        char c = (text[i]);
        int key = (atoi(argv[1]) % 26);
        if (c <= 122 && c >= 97)
        char inc = text[i];
        {
            text[i] = tolower(keychecker[inc]);
        }
        // Shifting all Lowercase Letters
        if (c <= 90 && c >= 65)
        {
            text[i] = toupper(keychecker[inc]);
        }
        // Shifting all Uppercase Letters
    }
    printf("ciphertext: %s\n", text);
}
