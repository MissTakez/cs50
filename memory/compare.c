#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    char *s = get_string("s: ");
    char *t = get_string("j: ");

    printf ("%p\n", s);
    printf ("%p\n", t);

    //dará diferente pq eles estão em bits diferentes.
    if (s == t)
    {
        printf ("Same\n");
    }
    else
    {
        printf ("Different\n");
    }

    //agora ele está comparando exatamente cada char e não o endereço.
    if (strcmp(s, t) == 0)
    {
        printf ("Same\n");
    }
    else
    {
        printf ("Different\n");
    }

}