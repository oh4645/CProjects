#include <stdio.h>
int main(void)
{
    float loan_amount, interest_rate, monthly_payment, remaining_first,
	  remaining_second, remaining_third;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    remaining_first = loan_amount * (1 + (interest_rate / 100 / 12))
       	- monthly_payment;

    remaining_second = remaining_first * (1 + (interest_rate / 100 / 12))
       	- monthly_payment;

    remaining_third = remaining_second * (1 + (interest_rate / 100 / 12))
       	- monthly_payment;

    printf("Balance remaining after first payment: $%.2f\n", remaining_first);
    printf("Balance remaining after second payment: $%.2f\n", remaining_second);
    printf("Balance remainign after third payment: $%.2f\n", remaining_third);

    return 0;

}
