#include <stdio.h>
int main(void)
{
#define RADIUS 10
#define PI 3.141592
	float volume_of_sphere = 
		RADIUS * RADIUS * RADIUS * (4.0f / 3.0f) / PI;
       printf("the volume of the sphere :  %f\n", volume_of_sphere);
return 0;       
}
