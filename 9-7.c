#include <stdio.h>
int main(void)
{
    int x, n;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter n: ");
    scanf("%d", &n);

    int power(int x, int n)
    {
	if (n== 0)
	    return 1;
	else if (n % 2 == 0)
	    return power(x, n / 2) * power(x, n / 2);
	else
	    return x * power(x, n - 1);
    }

    printf("Result: %d\n", power(x, n));
    return 0;
}
