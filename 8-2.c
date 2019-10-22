#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int digit_seen[10] = {0};
    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);
    
    printf("Digit:        0  1  2  3  4  5  6  7  8  9\n");
    printf("Occurrences:");

    while (n > 0)
    {
	digit = n % 10;
	digit_seen[digit] += 1;
	n /= 10;
    }
    
    for(i = 0; i < 10; i++)
    {
	printf("%3d", digit_seen[i]);
    }
    printf("\n");    
    return 0;
}
