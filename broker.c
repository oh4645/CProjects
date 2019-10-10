#include <stdio.h>
int main(void)
{
	int share_amount;
	float commission, share_price, value, rival_commission;

    printf("Enter the number of shares: ");
    scanf("%d", &share_amount);
    printf("Enter the price per share");
    scanf("%f", &share_price);

    value = share_amount * share_price;

	if (value < 2500.00f)
		commission = 30.00f + .017 * value;
	else if (value < 6250.00f)
		commission = 56.00 + .0066f * value;
	else if (value < 20000.00f)
		commission = 76.00f + .0034f * value;
	else if (value < 50000.00f)
		commission = 155.00f + .0011f * value;
	else
		commission = 255.00f + .0009f * value;

	if (commision < 39.00f)
		commission = 39.00f;

	if (share amount < 2000)
	{
	    rival_commission = 33.00f + 0.03 * share_amount;
	}
	else
	{
	    rival_commission = 33.00f + 0.02 * share_amount;
	}


	printf("Commission: $%.2f\n", commission);
	printf("Commission of rival broker: $%.2f\n", rival_commission);

	return 0;
}

