#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool is_valid(string key);

int main(int argc, string argv[])
{
    string key = argv[1];
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (!is_valid(key))
    {
        return 1;
    }
    string text = get_string("plaintext:  ");
    printf("%s", "ciphertext: ");
    int s = strlen(text);

    // descoverying witch how we will cipher

    for (int x = 0; x < s; x++)
    {
        if (text[x] >= 'A' && text[x] <= 'Z') //if the is uppercase
        {
            int i = text[x] - 65; //to find when is the text[x] (65 = 'A' ASCII)
            printf("%c", toupper(key[i])); //to move to [i] in key
        }
        else if (text[x] >= 'a' && text[x] <= 'z') //if it is lowercase
        {
            int i = text[x] - 97; //(97 = 'a' ASCII)
            printf("%c", tolower(key[i]));
        }
        else
        {
            printf("%c", text[x]);
        }
    }
    printf("\n");
}



//valid de key
bool is_valid(string key)
{
    int n = strlen(key);

    for (int x = 0; x < n; x++)
    {
        // if it is alphabets chart
        if (key[x] < 'A' || key[x] > 'z' || (key[x] > 'Z' && key[x] < 'a'))
        {
            printf("Usage: ./substitution key.\n");
            return false;
        }
    }
    //Checking 26 carcaters. It is out of 'for' to be sure that only alphabets charts receive this kind of error.
    if (n != 26)
    {
        printf("Key must contain 26 characters.\n");
        return false;
    }
    //Checking if have double numbers
    for (int x = 0; x < n - 1 ; x++)
    {
        for (int i = x + 1; i < n ; i++)
        {
            if (tolower(key[x]) == tolower(key[i])) // to do not do misstakes between them
            {
                printf("Usage: ./substitution key.\n");
                return false;
            }
        }
    }
    return true;
}

