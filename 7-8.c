#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour, minute, d1, d2, d3, d4, d5, d6, d7, d8, a1, a2, a3, a4, a5, a6, a7, a8, min12, min34, min56, min78, min1234, min5678, min,
        minarr12, minarr34, minarr56, minarr78, minarr1234, minarr5678, minarr,	since_midnight, closest_departure_hour,
       closest_departure_minute, closest_arrival_hour, closest_arrival_minute;

    char indicator;

    printf("Enter a 12-hour time: ");

    scanf("%d :%d %c", &hour, &minute, &indicator);

    if (toupper(indicator) == 'P')
	hour += 12;

    since_midnight = hour * 60 + minute;

    d1 = 8 * 60;
    d2 = 9 * 60 + 43;
    d3 = 11 * 60 + 19;
    d4 = 12 * 60 + 47;
    d5 = 14 * 60 ;
    d6 = 15 * 60 + 45;
    d7 = 19 * 60;
    d8 = 21 * 60 + 45;

    a1 = 10 * 60 + 16;
    a2 = 11 * 60 + 52;
    a3 = 13 * 60 + 31;
    a4 = 15 * 60;
    a5 = 16 * 60 + 8;
    a6 = 17 * 60 + 55;
    a7 = 21 * 60 + 20;
    a8 = 23 * 60 + 58;

    if (((since_midnight - d1))*(since_midnight - d1) < ((since_midnight - d2)*(since_midnight - d2)))
    {
	min12 = d1;
	minarr12 = a1;
    }
    else
    {
	min12 = d2;
	minarr12 = a2;
    }

    if (((since_midnight - d3))*(since_midnight - d3) < ((since_midnight - d4)*(since_midnight - d4)))
    {
	min34 = d3;
	minarr34 = a3;
    }
    else
    {
	min34 = d4;
	minarr34 = a4;
    }

    if (((since_midnight - d5))*(since_midnight - d5) < ((since_midnight - d6)*(since_midnight - d6)))   
    {
	min56 = d5;
	minarr56 = a5;
    }
    else
    {
	min56 = d6;
	minarr56 = a6;
    }

    if(((since_midnight - d7))*(since_midnight - d7) < ((since_midnight - d8)*(since_midnight - d8))) 
    {
	min78 = d7;
	minarr78 = a7;
    }
    else
    {
	min78 = d8;
	minarr78 = a8;
    }

    if (((since_midnight - min12))*(since_midnight - min12) < ((since_midnight - min34)*(since_midnight - min34)))  
    {
	min1234 = min12;
	minarr1234 = minarr12;
    }
    else
    {
	min1234 = min34;
	minarr1234 = minarr34;
    }

    if (((since_midnight - min56))*(since_midnight - min56) < ((since_midnight - min78)*(since_midnight - min78))) 
    {
	min5678 = min56;
	minarr5678 = minarr56;
    }
    else
    {
	min5678 = min78;
	minarr5678 = minarr78;
    }

    if (((since_midnight - min1234))*(since_midnight - min1234) < ((since_midnight - min5678)*(since_midnight - min5678)))
    {
	min = min1234;
	minarr = minarr1234;
    }
    else
    {
	min = min5678;
	minarr = minarr5678;
    }

    closest_departure_hour = min / 60;
    closest_departure_minute = min % 60;
    closest_arrival_hour = minarr / 60;
    closest_arrival_minute = minarr %60;

  
    if(closest_departure_hour >= 12)
    {
    if(hour == 12)
    {
	printf("Closest departure time is 12:%.2d p.m., ", closest_departure_minute);
    }
    else
    {	
	printf("Closest departure time is %d:%.2d p.m., ", (closest_departure_hour - 12), closest_departure_minute);
    }
    }
    else
    {
	printf("Closest departure time is %d:%.2d a.m., ", closest_departure_hour, closest_departure_minute);
    }
 
    if(closest_arrival_hour >= 12)
    {
    if(hour == 12)
    {
	printf("arriving at 12:%.2d p.m.\n", closest_arrival_minute);
    }
    else
    {	
	printf("arriving at %d:%.2d p.m.\n", (closest_arrival_hour - 12), closest_arrival_minute);
    }
    }
    else
    {
	printf("arriving at %d:%.2d a.m.\n", closest_arrival_hour, closest_arrival_minute);
    }
 
    return 0;
}
