// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, float tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

    // TODO: Complete the function
    float half(float bill, float tax, float tip)
    {
        float total = bill * (1 + tax  / 100);
        float wtip = total * (1 + tip / 100);

        return wtip / 2;
    }
