#include <stdio.h>
int main(void)
{
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);
    
    if(hour >= 12)
    {
    if(hour == 12)
    {
	printf("Equivalent 12-hour time: 12:%.2d PM\n", minute);
    }
    else
    {	
	printf("Equivalent 12-hour time: %d:%.2d PM\n", (hour - 12), minute);
    }
    }
    else
    {
	printf("Equivalent 12-hour time: %d:%.2d AM\n", hour, minute);
    }
    return 0;
}
