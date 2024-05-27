#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool onlyDigits(string s);
char rotate(char c, int n);

int main(int argc, string argv[])
{
    // program was run with just ONE command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // user input one argument
    else
    {
        bool isOnlyDigits = onlyDigits(argv[1]);

        if (isOnlyDigits)
        {
            int n = atoi(argv[1]);
            string s = get_string("plaintext: ");
            int length = strlen(s);

            for (int i = 0; i < length; i++)
            {
                s[i] = rotate(s[i], n);
            }
            printf("ciphertext: %s\n", s);
            return 0;
        }
        else
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
}

// check if the key is digits
bool onlyDigits(string s)
{
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        if (isdigit(s[i]) == false)
        {
            return false;
        }
    }
    return true;
}

char rotate(char c, int n)
{
    if (isupper(c))
    {
        c = ((c - 'A') + n) % 26 + 'A';
    }
    else if (islower(c))
    {
        c = ((c - 'a') + n) % 26 + 'a';
    }

    return c;
}



