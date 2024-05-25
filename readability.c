#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int countLetters(string text);
int countWords(string text);
int countSentences(string text);

int main(void)
{
    string text = get_string("text: ");
    int letters = countLetters(text);
    int words = countWords(text);
    int sentences = countSentences(text);

    // count letters:  the average number of letters per 100 words in the text
    // printf("letters: %i\n", letters);

    // count words
    // printf("words: %i\n", words);

    // count sentences: the average number of sentences per 100 words in the text
    // printf("sentences: %i\n", sentences);

    // count L
    float L = ((float) letters / words) * 100;
    // printf("L: %f\n", L);

    // count S
    float S = ((float) sentences / words) * 100;
    // printf("S: %f\n", S);

    float index = 0.0588 * L - 0.296 * S - 15.8;
    // printf("round index is: %d\n", (int) round(index));

    if (round(index) < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (round(index) >= 1 && round(index) < 16)
    {
        printf("Grade %d\n", (int) round(index));
    }
    else 
    {
        printf("Grade 16+\n");
    }
}

int countLetters(string text)
{
    int letters = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters = letters + 1;
        }
    }
    return letters;
}

int countWords(string text)
{
    int space = 0;
    int words = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            space = space + 1;
            words = space + 1;
        }
    }

    if (space == 0)
    {
        words = 1;
    }

    return words;
}

int countSentences(string text)
{
    int sentences = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences = sentences + 1;
        }
    }

    return sentences;
}