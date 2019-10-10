#include <stdio.h>
int main(void)
{
	float amount = 0.0f, interest_rate = 0.0f, monthly_payment = 0.0f;
        float remaining_first = 0.0f, remaining_second = 0.0f, remaining_third = 0.0f;
	
	printf("Enter amount of loan: ");
	
	scanf("%f", &amount);
	
	printf("Enter interest rate: ");
	
	scanf("%f", &interest_rate);
	
	printf("Enter monthly payment: ");
	
	scanf("%f", &monthly_payment);
	
	remaining_first = amount * (1 + (interest_rate) / 12 / 100) - monthly_payment;
	remaining_second = remaining_first * (1 + (interest_rate) / 12 / 100) - monthly_payment;
	remaining_third = remaining_second * (1 + (interest_rate) / 12 / 100) - monthly_payment;

	printf("Balance remainint after first payment: $%.2f\n", remaining_first);
	printf("Balance remaining after second payment: $%.2f\n", remaining_second);
	printf("Balance remaining after third payment: $%.2f\n", remaining_third);




	return 0;
}
