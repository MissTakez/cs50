#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //Aqui embaixo é para fazer um número x repetido
    for (int i = 0; i < 4; i++)
    {
        printf ("??????\n");
    }

    //Aqui embaixo é para fazer o reptido tmbm
    for (int i = 0; i < 4; i++)
    {
        printf ("?");
    }
    printf ("\n");

    //Aqui embaixo é para fazer a linha
    for (int i = 0; i < 2; i++)
    {
        printf ("#\n");
    }

    //Aqui embaixo é para fazer bloquinho
    const int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        printf ("#");
        }
        printf ("\n");
     }

    //Aqui precisa incluir o cs50.h e escolha o tamanho.
    {
        int a;
        do
        {
            a = get_int ("Size: ");
        }
        while (a < 1);

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
        {
            printf ("|");
        }
            printf ("\n");
        }
    }
}