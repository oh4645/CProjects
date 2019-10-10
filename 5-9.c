#include <stdio.h>
int main(void)
{
    int month1, month2, date1, date2, year1, year2;


    printf("Enter first date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month1, &date1, &year1);
    
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month2, &date2, &year2);

    if((year1 * 365 + month1 * 30 + date1 * 1) < 
	    (year2 * 365 + month2 * 30 + date1 * 1))
    {
	printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", 
		month1, date1, year1, month2, date2, year2);
    }
    else
    {
	printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", 
		month2, date2, year2, month1, date1, year1);
    }

    return 0;
}
