#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
void print_grade(float grade);

int main(void)
{
    //Ask a text
    string text = get_string("Text: ");

    //Here we change the begging of the Coleman-Liau index to l and s, to do a clear code.
    float l = (((float)count_letters(text) / (float)count_words(text)) * 100);
    float s = (((float)count_sentences(text) / (float)count_words(text)) * 100);

    //Calculating using the The Coleman-Liau index
    float grade = ((0.0588 * l) - (0.296 * s)) - 15.8;
    //Calling the Grade's print funcion.
    print_grade(grade);
}

//Funcion 1 - Let's find out how many letters.
int count_letters(string text)
{
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        //With the ctype library, isalpha check whether a character is alphabetical! (it's on manual.)
        if (isalpha(text[i]))
        {
            //If it find a alphabetical character, add 1.
            count++;
        }
    }
    return count;
}
//Funcion 2 - Let's find out how many words.
int count_words(string text)
{
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isspace(text[i]))
        {
            //if it find a space, add 1.
            count++;
        }
    }
    //returns the space's number + 1, because a sentece won't end with a space.
    return count + 1;
}
int count_sentences(string text)
{
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '!' || text[i] == '?' || text[i] == '.')
        {
            count++;
        }
    }
    return count;
}
void print_grade(float grade)
{
    if (grade <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 2 && grade < 16)
    {
        printf("Grade %.f\n", grade);
    }
    else
    {
        printf("Grade 16+\n");
    }
}