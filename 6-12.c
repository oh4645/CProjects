#include <stdio.h>
int main(void)
{
    int i, j;
    float e, epsilon,factorial;

    printf("Enter a value of epsilon: ");
    scanf("%f", &epsilon);

    e = 1;//initialization  

    for(i = 1; ; i++)
    {
	factorial = 1.0f;//initialization

	for(j = 1; j <= i; j++)
	{
	    factorial *= j; 
	} 
	
	e += (1 / factorial);
	
	if ((1/ factorial) < epsilon)
	    break;
    }

    printf("Debug 1/factorial = %f, epsilon = %f\n", 
	    (1 / factorial), epsilon);//debug code(not inculed on original) 
    printf("Approximation of e where epsilon=%f: %f\n", epsilon, e);

    return 0;

}
