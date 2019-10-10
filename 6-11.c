#include <stdio.h>
int main(void)
{
    int n, i, j;
    float e, factorial;

    printf("Enter the number n: ");
    scanf("%d", &n);

    e = 1;//initialization    

    for(i = 1; i <= n; i++)
    {
	factorial = 1.0f;//initialization

	for(j = 1; j <= i; j++)
	{
	    factorial *= j; 
	} 
	
	e += (1 / factorial);

    }

    printf("Debug %d! = %f\n", n, factorial);//Debug print; 
                                             //not included on 
                                             //original demand
    printf("Approximation of e when n=%d: %f\n", n, e);

    return 0;

}
