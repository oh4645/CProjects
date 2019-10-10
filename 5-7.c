#include <stdio.h>
int main(void)
{
    int i, j, k, l, max12, max34, min12, min34, max, min;    
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i, &j, &k, &l);
    

    if(i > j)
    {
	max12 = i;
	min12 = j;
    }
    else
    {
	max12 = j;
	min12 = i;
    }

    if(k > l)
    {
	max34 = k;
	min34 = l;
    }
    else
    {
	max34 = l;
	max34 = k;
    }

    if (max12 > max34)
    {
	max = max12;
    }
    else
    {
	max = max34;
    }

    if (min12 < min34)
    {
	min = min12;
    }
    else
    {
	min = min34;
    }

    printf("Largest: %d\nSmallest: %d\n", max, min);

    return 0;
}
