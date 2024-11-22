#include <cs50.h>
#include <stdio.h>

int main (void)
{
    printf ("hello, world\n");
}
//rename it
//clang -o (new name) (file name.c)

{
    string name = get_string ("What's yout name?");
    printf ("Hello, %s\n", name);
}