#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    bool repeated;
    int digit_seen[10] = {0};
    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while (n > 0)
    {
	digit = n % 10;
	digit_seen[digit] += 1;
	n /= 10;
    }
    
    for(i = 0; i < 10; i++)
    {
	if (digit_seen[i] > 1)
	{
	    printf("Repeated digit(s):");
	    repeated = true;
	}
	if (digit_seen[i] > 1)
	    break;
    }

    for(i = 0; i < 10; i++)
    {
        if (digit_seen[i] > 1)
        {
    	printf(" %d", i);
        }
    }
    if (repeated == true)
	printf("\n");

    if (repeated == false)
        printf("No repeated digit\n");	
    
        
    return 0;
}
