#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool keyAlphabet(string key);
bool keyAlphabetOnce(string key);
void rotate(string text, string key);

int main(int argc, string argv[])
{
    // only single command-line argument
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else
    {
        bool isKeyAlphabet = keyAlphabet(argv[1]);
        bool iskeyAlphabetOnce = keyAlphabetOnce(argv[1]);

        if (isKeyAlphabet)
        {
            if (iskeyAlphabetOnce)
            {
                int length = strlen(argv[1]);

                if (length == 26)
                {
                    string key = argv[1];
                    string text = get_string("plaintext: ");
                    // output ciphertext
                    rotate(text, key);
                    return 0;
                }
                else
                {
                    printf("Key must contain 26 characters.\n");
                    printf("Usage: ./substitution key\n");
                    return 1;
                }
            }
            else
            {
                printf("Key must not contain repeated characters.\n");
                return 1;
            }
        }
        // If the key is invalid
        else
        {
            printf("Key must only contain alphabetic characters.\n");
            return 1;
        }
    }
}

// founction: key must be alphabetic characters
bool keyAlphabet(string key)
{
    int length = strlen(key);

    for (int i = 0; i < length; i++)
    {
        if (isalpha(key[i]) == false)
        {
            return false;
        }
    }
    return true;
}

// founction: key must contain each letter only once
bool keyAlphabetOnce(string key)
{
    int length = strlen(key);

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (key[j] == key[i])
            {
                printf("Key should contain each letter only once\n");
                return false;
            }
        }
    }
    return true;
}

// founction: rotate
void rotate(string text, string key)
{
    int length = strlen(text);
    // printf("length is %d\n", length);
    // printf("text = %s\n", text);
    // printf("key = %s\n", key);

    for (int i = 0; i < length; i++)
    {
        if (isupper(text[i]))
        {
            text[i] = toupper(key[text[i] - 'A']);
        }
        if (islower(text[i]))
        {
            text[i] = tolower(key[text[i] - 'a']);
        }
    }
    printf("ciphertext: %s\n", text);
}
