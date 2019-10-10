#include <stdio.h>
int main(void)
{
	int amount = 0, bill_twenty = 0, bill_ten = 0, bill_five = 0, bill_one = 0;

	printf("Enter a dollar amount : ");
	scanf("%d", &amount);
	bill_twenty = amount / 20;
	bill_ten = (amount - (20 * bill_twenty)) / 10;
	bill_five = (amount - (20 * bill_twenty) - (10 * bill_ten)) / 5;
	bill_one = (amount - (20 * bill_twenty) - (10 * bill_ten)
		       	- (5 * bill_five));

	printf("$20 bills : %d\n$10 bills : %d\n $5 bills : %d\n",
		 bill_twenty, bill_ten, bill_five);
       printf(" $1 bills : %d\n", bill_one);	

return 0;
}
