#include <stdio.h>
int main(void)
{
    float tax, income;
    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

    if(income <= 750.0f)
	tax = income * 0.01f;
    else if(income <= 2250.0f)
	tax = (income - 750.0f) * 0.02f + 7.50f;
    else if(income <= 3750.0f)
	tax = (income - 2250.0f) * 0.03f + 37.50f;
    else if(income <= 5250.0f)
	tax = (income - 3750.0f) * 0.04f + 82.50f;
    else if(income <= 7000.0f)
	tax = (income - 5250.0f) * 0.05f + 142.50f;
    else
	tax = (income - 7000.0f) * 0.06f + 230.00f;

    printf("Income tax due: $%.2f\n", tax);

    return 0;
}
