// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // If don't have a one command-line argument:
    if (argc != 2)
    {
        printf("Usage: word\n");
        return 1; //false

    }

    else
    {
        // But if have, lets do it!
        // The input is = to command-line first argument
        string input = argv[1];
        int length = strlen(input); // Here we can see the length is a integer number e returns the string's chars using the strlen function

        for (int i = 0; i < length; i++)
        {
            switch (input[i]) //here we start the switch to replace
            {
                case 'a': //here e use '' to show we need to replace this letter, in this case, a
                    printf("6");
                    break;

                case 'e':
                    printf("3");
                    break;

                case 'i':
                    printf("1");
                    break;

                case 'o':
                    printf("0");
                    break;

                default:
                    printf("%c", input[i]); //here e use default to keep the others letters
            }
        }
        printf("\n"); //print the newline
        return 0; //true
    }
}
