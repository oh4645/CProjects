#include <stdio.h>

int main(void)
{
    double x, y = 1.0, avg;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    for(;;)
    {
	avg = (y + (x / y)) / 2;

	if ((((x / y - avg) * (x / y - avg))) < 0.0000000001)
	break;

	y = avg;
    }
    printf("Square root: %.5lf\n", y);

    return 0;

}

