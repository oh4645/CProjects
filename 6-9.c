#include <stdio.h>
int main(void)
{
    int payment_number, i;
    float loan_amount, loan_remain, interest_rate, monthly_payment, 
	  remaining_next;


    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("Enter the number of payments: ");
    scanf("%d", &payment_number);

    loan_remain = loan_amount;

    for (i = 1; i <= payment_number; i++)
    {
        remaining_next = loan_remain * (1 + (interest_rate / 100 / 12))
       	- monthly_payment;

	loan_remain = remaining_next;

	printf("Balance remaining after %dtimes of payment: $%.2f\n",
		i, remaining_next);
	    
    }
  
    return 0;

}
