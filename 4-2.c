#include <stdio.h>
int main(void)
{
	int i, houndreds, tens, ones;
	printf("Enter a three-digit number: ");
	scanf("%d", &i);
	ones = i % 10;
	tens = (i % 100)/10;
	houndreds =  i / 100;
	printf("The reversal is: %d\n", (ones * 100) +(tens * 10) + houndreds);	

	return 0;
}

