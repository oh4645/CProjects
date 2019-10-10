#include <stdio.h>
int main(void)
{
float r;
#define RADIUS r
#define PI 3.141592
	printf("Enter the radius of shpere : ");
	scanf("%f",&r);
 	float volume_of_sphere =
                RADIUS * RADIUS * RADIUS * (4.0f / 3.0f) / PI;

	printf("the volume of the sphere :  %f\n", volume_of_sphere);
return 0;
}
