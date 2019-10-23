#include <stdio.h>
int main(void)
{
    int i, hour, minute, since_midnight, closest_departure_hour,
       closest_departure_minute, closest_arrival_hour, closest_arrival_minute,
       closest_dep, closest_array;
    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);

    since_midnight = hour * 60 + minute;

    const int dep[8] = {8 * 60, 9 * 60 + 43, 11 * 60 + 19, 12 * 60 + 47, 14 * 60, 15 * 60 + 45, 19 * 60, 21 * 60 + 45};
    const int arr[8] = {10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60, 16 * 60 + 8, 17 * 60 + 55, 21 * 60 + 20, 23 * 60 + 58};
 
    closest_dep = dep[0];
    closest_array = 0;

    for (i = 0; i < 8; i++)
    {
	if ((since_midnight - closest_dep) * (since_midnight - closest_dep) > (since_midnight - dep[i]) * (since_midnight - dep[i]))
	{
	    closest_dep = dep[i];
	    closest_array = i;
	}
    }
    
    closest_departure_hour = closest_dep / 60;
    closest_departure_minute = closest_dep % 60;
    closest_arrival_hour = arr[closest_array] / 60;
    closest_arrival_minute = arr[closest_array] %60;

  
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
