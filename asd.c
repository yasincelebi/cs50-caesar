#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Get key from command line argument.

int main(int argc, string argv[])

{
    // Check for 2 arguments only.
    if (argc != 2)
    {
        printf("try again\n");
        return 1;
    }

    // Store key in variable int key.
    int k = atoi(argv[1]);

    // Ensure key is positive
    if (k < 0)
    {
        printf("try again\n");
        return 1;
    }

    // Prompt for text to encrypt
    else
    {
        string code = get_string("plaintext: ");
        printf("ciphertext: ");

        // Next comment
        for (int i = 0, n = strlen(code); i < n; i++)
        {
            if isalpha (code[i])
            {
                if islower (code[i])
                    printf("%c", (((code[i] + k) - 97) % 26) + 97);
                else
                    printf("%c", (((code[i] + k) - 65) % 26) + 65);
            }
            else
                printf("%c", code[i]);
        }

        printf("\n");
        return 0;
    }
}
