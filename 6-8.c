#include <stdio.h>
int main(void)
{
    int days, starting_day, i, j;
    
    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);

    for (i = 1; i < starting_day; i++)
    {
	printf("   ");
    }

    for (i = 1; i <= days; i++)
    {
	if (((i + starting_day - 1) % 7 == 0) || (i == days))
	{
	    printf("%2d\n", i);
	}
		
	else
	{
	printf("%2d ", i);
	}
    }
    return 0;
}
