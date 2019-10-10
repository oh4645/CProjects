#include <stdio.h>
int main(void)
{
	int i, digit1, digit2, digit3, digit4, digit5;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &i);
	digit1 = i % 8;
	digit5 = i / (8 * 8 * 8 * 8);
        digit4 = (i - (digit5 * (8 * 8 * 8 * 8))) / (8 * 8 * 8);	
	digit3 = ((i - (digit5 * (8 * 8 * 8 * 8)) - digit4 * (8 * 8 * 8))) /( 8 * 8);
	digit2 = ((i - (digit5 * (8 * 8 * 8 * 8)) - digit4 * (8 * 8 * 8) - digit3 * (8 * 8))) / 8;
	printf("In octal, your number is: %d%d%d%d%d\n", digit5, digit4, digit3, digit2, digit1);
		return 0;
		}
