#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before: ");
    printf ("After: ");

    for (int i = 0, n = strlen(s); i < n; i++) //strlen = string lenght
    {
        printf("%c", toupper(s[i])); //toupper - let uppercase
    }

    printf("\n");

}