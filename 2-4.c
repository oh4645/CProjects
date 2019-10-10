#include <stdio.h>
int main(void)
{
#define TAX 5.0f

	float amount = 0.0f;
	float tax_added = 0.0f;

	printf("Enter an amount : ");

	scanf("%f", &amount);

	tax_added = amount * (1 + (TAX / 100));

	printf("With tax added : $%.2f\n",tax_added);

	return 0;
}
