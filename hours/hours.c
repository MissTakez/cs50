#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_hours(int hours[], int weeks, char output);

int main(void)
{
    int weeks = get_int("Number of weeks taking CS50: ");
    int hours[weeks];

    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }

    char output;
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');

    printf("%.1f hours\n", calc_hours(hours, weeks, output));
}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int weeks, char output)
{
    // first of all we need to set up a result, in this case.
    float sum = 0;

    //now we will go to outputs
    //if the 'T' output
    if (output == 'T')
    {
        //the conditionals for 'T' and we need that 'i' be less then weeks, when it became == we need stop it
        for (int i = 0; i < weeks; i++)
        {
            sum += hours[i]; //the result will be how many hours
        }
        return sum;
    }
    //if the 'A' output
    if (output == 'A')
    {
        //the conditionals for 'A' - the same as before
        for (int i = 0; i < weeks; i++)
        {
            sum += hours[i];
        }
        return sum / weeks; //we need to put the weeks here, otherwise we will have a integer number
    }
    else //if the output is != A || T - returns 0
    {
        return 0;
    }
}