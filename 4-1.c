#include <stdio.h>
int main(void)
{
	int i, n = 0;
	printf("Enter a number: ");
	scanf("%d", &i);

	

	while(i != 0)
	{
	    n += (i % 10);

	    n *= 10;

	    i /= 10;
	    
	}

	printf("The reversal is: %d\n", n);	

	return 0;
}

