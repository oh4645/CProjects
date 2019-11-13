#include <stdio.h>
int main(void)
{

    int n, k;

    scanf("%d %d", &n, &k);

    int digit(int n, int k)
    {
	int i, digit, duplicate_n, digit_count = 0, count = 0;

	duplicate_n = n;
	for(; duplicate_n > 0;)
	{
	    duplicate_n /= 10;
	    digit_count++;
	}

	if(k <= digit_count)
	{
	    for(i = 0; i < k; i++)
	    {
		digit = n % 10;
		n /= 10;
	    }
	}
	else
	    digit = 0;
	return digit;
    }

    printf("%d", digit(n, k));

    return 0;
}
