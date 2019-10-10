#include <stdio.h>
int main(void)
{
	int i, n = 0;
	printf("Enter a number: ");
	scanf("%d", &i);

	

	do
	{
	    n *= 10;

	    n += (i % 10);

	    i /= 10;
	    
	}
	while( i != 0);

	printf("The reversal is: %d\n", n);	

	return 0;
}

