#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <crypt.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./crack <hash>\n")
        return 1;
    }
    string key = (argv[1]);
    for (int i = 0; i < 8; i++)
    {
        if ((strlen(key) != 13))
        {
            printf("Key must only contain 13 characters.\n");
            // DEBUGGING: printf("%i\n", keychecker[i]);
            return 1;
        }
        // Checks for a 26 Letter key 👌
        for (int j = i + 1; j < 26; j++)
        {
            if (key[i] == key[j])
            {
                printf("Key must not contain repeated characters.\n");
                return 1;
            }
        }
        // Checks for independence between letters 👌
    }
}
