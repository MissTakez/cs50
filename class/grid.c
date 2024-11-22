#include <cs50.h>
#include <stdio.h>

//as funções estão lá embaixo! lol
int get_size (void);
void print_grid (int size);

int main (void)
{
    //o tamanho do grid
    int n = get_size();

    //imprima o grid
    print_grid (n);
}







































//novas funções
int get_size (void)
{
    int n;
    do
    {
        n = get_int ("Size: ");
    }
    while (n < 1);
    return n;
}
void print_grid (int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf ("x");
        }
        printf ("\n");
    }
}
//agora a gente puxa esse código lá pra baixo e pega somente a primeira linha de cada função.
