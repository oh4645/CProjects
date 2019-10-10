#include <stdio.h>
int main(void)
{
    int month, date, year, earliest_month, earliest_date, earliest_year;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month, &date, &year);
    
    earliest_month = month; //initialize
    earliest_date = date;   //the earliest mm/dd/yy
    earliest_year = year;   //values

    for(; (month != 0) || (date != 0) || (year != 0); )
    {
	printf("Enter a date (mm/dd/yy): ");
	scanf("%d /%d /%d", &month, &date, &year);
    

    if (((year * 365 + month * 30 + date * 1) < 
	    (earliest_year * 365 + earliest_month * 30 + earliest_date * 1))	    && (year != 0 || month != 0 || date != 0))
    
    {
	earliest_month = month;
	earliest_date = date;
	earliest_year = year;
    }

    }   
    printf("%d/%d/%.2d is the earliest date\n", earliest_month,
	    earliest_date, earliest_year);

    return 0;
}
