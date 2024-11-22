// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");

    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    //let's verify if this password has chars.
    if (password == NULL || strlen(password) == 0)
    {
        return false;
    }

    //opening boolean
    bool lower = false;
    bool upper = false;
    bool digit = false;
    bool punct = false;

    //since i in 0 to string lenght
    for (int i = 0, n = strlen(password); i < n; i++)
    {
        if (islower(password[i])) //if in i char of password has lower - true!
        {
            lower = true;
        }
        if (isupper(password[i])) //if in i char of password has upper - true!
        {
            upper = true;
        }
        if (isdigit(password[i])) //if in i char of password has a number - true!
        {
            digit = true;
        }
        if (ispunct(password[i])) //if in i char of password has a symbol - true!
        {
            punct = true;
        }

    }
    return lower && upper && digit && punct; //check if you have at least one of them! [true, true, true, true]
}