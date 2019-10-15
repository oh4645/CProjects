#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int hour, minute;
    char indicator;

    printf("Enter a 12-hour time: ");

    scanf("%d :%d %c", &hour, &minute, &indicator);

    if (toupper(indicator) == 'P')
	hour += 12;

    printf("Equivalent 24-hour time: %d:%.2d\n", hour, minute);
    return 0;
}

