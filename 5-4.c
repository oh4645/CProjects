#include <stdio.h>
int main(void)
{
    int speed;
    printf("Enter a wind speed (in knots): ");
    scanf("%d", &speed);
    
    if(speed < 1)
    {
	printf("Wind Description: Calm\n");
    }
    else if(speed < 4)
    {
	printf("Wind Description: Light air\n");
    }
    else if(speed < 28)
    {
	printf("Wind Description: Breeze\n");
    }
    else if(speed < 48)
    {
	printf("Wind Description: Gale\n");
    }
    else if(speed < 64)
    {
	printf("Wind Description: Strom\n");
    }
    else
    {
	printf("Wind Description: Hurricane\n");
    }
    return 0;
}
