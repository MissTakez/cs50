#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int n = 50;
    printf ("%i\n", n); //imprima o que está lá!
    printf ("%p\n", &n); //imprima o locar "endereço"

    //pointer
    int *p = &n;
    printf ("%p\n", p); //imprima o locar "endereço"
    printf ("%i\n", *p); //imprima o que está lá!

    string s = "Hi!";
    printf ("%s\n", s);

    char *d = "Hi!";
    printf ("%s\n", d);

    //sem a biblioteca cs50.h
    char *m = "HI!";
    printf ("%s\n", m);
    printf ("%p\n", m);
    printf ("%p\n", &m[0]); //primeiro lugar do char
    printf ("%p\n", &m[1]); //segundo lugar exato do char
    printf ("%p\n", &m[2]); //terceiro lugar exato do char
    printf ("%p\n", &m[3]); //quarto lugar exato do char

    char *a = "HI!";
    printf ("%c\n", a[0]); //primeiro char
    printf ("%c\n", a[1]); //segundo char
    printf ("%c\n", a[2]); //terceiro char

    char *b = "HI!";
    printf ("%c\n", *b); //primeiro char
    printf ("%c\n", *(b + 1)); //segundo char
    printf ("%c\n", *(b + 2)); //terceiro char

    char *c= "HI!";
    printf ("%s\n", c); //primeiro char
    printf ("%s\n", c+1); //segundo char
    printf ("%s\n", c+2); //terceiro char
}