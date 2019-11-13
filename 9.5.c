#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n); //debug

    int num_digits(int n)
    {
	int count = 0;

	for(; n > 0;)
	{
	    n /= 10;
	    count++;
	}

	return count;
    }

    printf("%d", num_digits(n));
    return 0;
}
