#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day)
{
    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, stop_adding_month = 0;
    *month = 1;
    *day = 1;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
	days_in_month[1]++;

    }
	for(;;)
	{
	    day_of_year -= days_in_month[*month - 1];
	    if (day_of_year > 0)
		(*month)++;
	    else
	    {
		day_of_year += days_in_month[*month - 1];
		stop_adding_month = 1;
		*day = day_of_year;
	    }
	    if (stop_adding_month)
		break;
	}
}

int main(void)
{
    int month, day, day_of_year, year;
    printf("Enter day of year(1 ~ 366): ");
    scanf("%d", &day_of_year);
    printf("Enter year: ");
    scanf("%d", &year);
    split_date(day_of_year, year, &month, &day);
    printf("%d / %d\n", day, month);

    return 0;
}
