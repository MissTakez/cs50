#include <cs50.h>
#include <stdio.h>

int main (void)
{
    {
    //cabe mais números and divide quebrado
        long x = get_long("x: ");
        long y = get_long("y: ");

        float z = (float) x / (float) y;
        printf ("%f\n", z);
    }

    //agora apresenta uma aproximação!
    {
        long x = get_long("x: ");
        long y = get_long("y: ");

        float z = (float) x / (float) y;
        printf ("%.20f\n", z);
    }
    //agora apresenta mais preciso ainda!
    {
        long x = get_long("x: ");
        long y = get_long("y: ");

        double z = (double) x / (double) y;
        printf ("%.20f\n", z);
    }
}
