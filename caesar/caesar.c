#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool valid(string key);

int main(int argc, string argv[])
{
    //check if has some ceaser key and if we have just a single command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        //assigning to the variable "key" the command-line argument [1] value
        string key = argv[1];
        if (!valid(key)) //call the function, we use ! to say "no"
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        else
        {
            //if yes, ask for plaintext
            int n; //creating a variable here because we need other format for key.
            // this is awesome at stdio.h!!! It reads from string(key) to int(n)!! Very happy learn this one!
            sscanf(key, "%d", &n);

            string text = get_string("plaintext:  ");

            //print the "ciphertext: " here, otherwise it will it enter the looping.
            printf("ciphertext: ");

            for (int i = 0; i < strlen(text); i++)
            {
                if (text[i] >= 'a' && text[i] <= 'z')
                {
                    //the bit - 97 ('a' - ASCCI table) + key. Then mod26, to check the result, if it is less then 26, it is the same number. + 96 again to find the new position on ASCII Table.
                    printf("%c", ((text[i] - 97 + n) % 26) + 97);
                }
                else if (text[i] >= 'A' && text[i] <= 'Z')
                {
                    //the same as before, just changing 97 to 65 ('A' - ASCII Table)
                    printf("%c", ((text[i] - 65 + n) % 26) + 65);
                }
                else
                {
                    //and if is not one of them, just keep it this way, as space for exemple.
                    printf("%c", text[i]);
                }
            }
            printf("\n");
        }
        return 0;
    }

}
//to check the key, if is it made by digits
bool valid(string key)
{
    int n = strlen(key);

    for (int i = 0; i < n; i++)
    {
        if (key[i] < '0' || key[i] > '9') //if it less than 0 or more than 9, it's false!
        {
            return false;
        }
    }
    return true;
}

