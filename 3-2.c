#include <stdio.h>
int main(void)
{
	int item_number, month, date, year;
	float unit_price;

	printf("Enter item number: ");
	scanf("%d", &item_number);

	printf("Enter unit price: ");
	scanf("%f", &unit_price);
	
	printf("Enter putchase date (mm/dd/yyyy): ");
	scanf("%d / %d / %d", &month, &date, &year);

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%-d\t\t$%7.2f\t%.2d/%.2d/%d\n", item_number, unit_price,
	       month, date, year);

	return 0;
}
