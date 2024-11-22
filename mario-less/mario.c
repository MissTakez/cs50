#include <cs50.h>
#include <stdio.h>

bool size(int number);

int main(void)
{
    int a;
    do
    {
        a = get_int("Height: ");
    }

    while (size(a));

    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            printf(" ");
        }
        for (int l = -1 ; l < i; l ++)
        {
            printf("#");
        }
        printf("\n");
    }
}

bool size(int number)
{
    if (number > 0 && number < 9)
    {
        return false;
    }
    return true;

}



