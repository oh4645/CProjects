#include <stdio.h>

int main(void)
{
    int m, n;

int gcd(int m, int n)
{
    if (n != 0)
	{
	    m = gcd(n, m % n);
	}
    return m;
}

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    printf("Greatest common divisor: %d\n", gcd(m, n));

    return 0;
}



