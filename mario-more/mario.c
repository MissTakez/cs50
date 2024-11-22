#include <cs50.h>
#include <stdio.h>

//the boolean function
bool size(int number);

int main(void)
{
    int a;
    do
    {
        a = get_int("Height: ");
    }

    while (size(a));//Here we wil check de boolean result! \o/

    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++) //to make de left size! Dots spaces! And here is the magic!!!
        {
            printf(" ");
        }
        for (int l = -1 ; l < i; l ++)
            //I added -1 because it was starting without a hash if it's 0! I didn't understand why! I would like to talk to some one about it! lol
        {
            printf("#");
        }
        for (int k = 0; k < 2; k++)
            //midle time!! Nothing espetacular to see here! Copy paste e see how the code perform! It was very intresting to do it!
        {
            printf(" ");
        }
        for (int m = -1; m < i; m ++) //and the end...actually, it did by it self! The space was the same, so, thank u "l"!
        {
            printf("#");
        }
        printf("\n");
    }
}

//Boolean to short the code. Here we will descover if the number is < 0 and > 8.

bool size(int number)

{
    if (number > 0 && number < 9)
    {
        return false; //I considered add false here to do not put "!" on size at while (size(a)).
    }
    return true;
}



