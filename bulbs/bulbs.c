#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    string msg = get_string("Message: "); //The input message will bem stored at msg
    int n = strlen(msg); //here we use strlen to string lenght, this will be n

    for (int i = 0; i < n; i++) //here we call "i" to separate de msg in bits
    {
        int value = (msg[i]); //here we convert the msg to decimal number in each bit! \o/

        //now is the crazy world! Starts our loop: once the system starts at 0, we put x = bits_in_byte - 1, so, starts at 7, and loops go on as long x is more or equal than 0 -- because we need it decreasing till 0, other wise, it will goes forever.
        for (int x = BITS_IN_BYTE - 1; x >= 0; x--)
        {
            //This one I had some difficult! My logical was for /2 and %2, but the binary don't show me 8 bits and it was backwards. So I looked for an solution!
            // value >> x! this >> means that you move the binary value to forward to right depending the x. So in this case, it moves to 7. Omg, I'm in love for it.
            //For exemplo "111" ("o") - 1101111 - with ">>" so ad 0 (because it is 8 bits) 01101111 - then this >> does 00000000 - and the 0 & 1 = False = 0, than 00000001 = 1 & 1 = True, and on and on!
            int bit = (value >> x) & 1;
            //here you print the funcion print_bulb(bit)
            print_bulb(bit);

        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
