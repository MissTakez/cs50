#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
    char *s = get_string("s: ");

    char* t = s;

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    //adiciona stdlib.h
    char *a = get_string("a: ");

    char *b = malloc(strlen(a) + 1);

    //for (int i = 0; i < strlen(a) + 1; i++)
    for (int i = 0, n = strlen(a) + 1; i < n; i++ )
    {
        b[i] = a[i];
    }

    if (strlen(b) > 0)
    {
        b[0] = toupper(b[0]);
    }

    printf("a: %s\n", a);
    printf("b: %s\n", b);

    //
    char *c = get_string("c: ");
    if (c == NULL)
    {
        return 1;
    }

    char *d = malloc(strlen(c) + 1);
    if (d == NULL)
    {
        return 1;
    }

    strcpy(d, c);

    if (strlen(d) > 0)
    {
        d[0] = toupper(d[0]);
    }

    printf("c: %s\n", c);
    printf("d: %s\n", d);

    //sempre que você alocar algo em malloc, precisa liberar memória
    free(d);

    return 0;
}