#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int countScore(string word);
int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    // Prompt the user for two words
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Print the winner
    if (countScore(word1) > countScore(word2))
    {
        printf("Player 1 wins!\n");
    }
    else if (countScore(word2) > countScore(word1))
    {
        printf("Player 2 wins!\n");
    }
    else if (countScore(word1) == countScore(word2))
    {
        printf("Tie!\n");
    }
}

// Compute the score of each word
int countScore(string word)
{
    int score = 0;

    for (int i = 0; i < strlen(word); i++)
    {
        if (islower(word[i]) || (word[i] >= 'a' && word[i] <= 'z'))
        {
            score = score + points[word[i] - 'a'];

            printf("%c ", word[i]);
            printf("%i ", word[i] - 'a');
            printf("%i\n", points[word[i] - 'a']);
        }
        else if (isupper(word[i]) || (word[i] >= 'A' && word[i] <= 'Z'))
        {
            score = score + points[word[i] - 'A'];

            printf("%c ", word[i]);
            printf("%i ", word[i] - 'A');
            printf("%i\n", points[word[i] - 'A']);
        }
    }
    return score;
}