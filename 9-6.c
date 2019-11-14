#include <stdio.h>
int main(void)
{
    float x;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    float power(float x, int n)
    {
	float result;

	    if (n == 0)
	    {
		result = 1;
	    }

	else if (n > 0)
	    result = x * power(x, n - 1);

	    else
		result = (1 / x) * power(x, n + 1);

    }

    float polynomial(float x)
    {
	
	return (3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) - power(x, 2) + 7 * x - 6);
    }

    printf("Result: %f\n", polynomial(x));
    return 0;
}
