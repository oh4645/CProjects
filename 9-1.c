#include <stdio.h>
#define ELEMENT_AMOUNT 5
int main(void)
{
    int i, a[ELEMENT_AMOUNT];

    
    printf("Enter a series of integers: ");

    for(i = 0; i < ELEMENT_AMOUNT; i++)
    {
	scanf("%d", &a[i]);
    }

    void selection_sort(int input[], int n)
    {
	int max, temp, i;
	max = input[0];
	temp = 0;
	for(i = 1; i <= n - 1; i++)
	{
	    if (input[i] > max)
	    {
		temp = i;
		max = input[i];
	    }
	}
	input[temp] = input[n - 1];
	input[n - 1] = max;

	if (n > 1)
	selection_sort(input, n - 1);

	return;
    }

    selection_sort(a, ELEMENT_AMOUNT);

    printf("Sorted result(s): ");
    
    for(i = 0; i < ELEMENT_AMOUNT; i++)
	{
	    printf("%d ", a[i]);
	}
    printf("\n"); 


    return 0;
}
