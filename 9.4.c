#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter year: ");
    scanf("%d", &year);

    int day_of_year(int month, int day, int year)
    {
	int total = day;
	if (year % 4 != 0)
	{
	    switch (month)
	    {
		case 12:
		    total += 30;
		case 11:
		    total += 31;
		case 10:
		    total += 30;
		case 9:
		    total += 31;
		case 8:
		    total += 31;
		case 7:
		    total += 30;
		case 6:
		    total += 31;
		case 5:
		    total += 30;
		case 4:
		    total += 31;
		case 3:
		    total += 28;
		case 2:
		    total += 31;
		case 1:
		    ;
		break;
	    }	    
	}
	else
	{
	    switch (month)
	    {
		case 12:
		    total += 30;
		case 11:
		    total += 31;
		case 10:
		    total += 30;
		case 9:
		    total += 31;
		case 8:
		    total += 31;
		case 7:
		    total += 30;
		case 6:
		    total += 31;
		case 5:
		    total += 30;
		case 4:
		    total += 31;
		case 3:
		    total += 29;
		case 2:
		    total += 31;
		case 1:
		    ;
		break;
	    }	    
	}
	return total;

    }
    printf("Day of year is %d\n", day_of_year(month, day, year));
    return 0;
}
