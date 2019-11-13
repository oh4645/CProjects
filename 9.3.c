#include <stdio.h>

int main(void)
{
    int m, n;

    int gcd(int m, int n)
    {
	int remainder;
	for (; n != 0;)
	{
	    remainder = m % n;
	    m = n;
	    n = remainder;
	}
	return m;
    }
    
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    printf("Greatest common divisor: %d\n", gcd(m, n));

    return 0;
}
