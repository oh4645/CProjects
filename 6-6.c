#include <stdio.h>
int main(void)
{
    int i, n;

    printf("Enter a number n: ");
    scanf("%d", &n);
    
    for(i = 0; (i * i) <= n; i += 2)
    {
	if(i >= 2)
	    printf("%d\n", i * i);
    }
    return 0;

}
