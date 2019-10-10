#include <stdio.h>
int main(void)
{

    int i, count =0;

//    for (i = 10; i > 1; i /= 2)
//	printf("%d ", i++);

//    printf("\n");

    i = 10;

    while (i >= 1)
    {
	{
	    printf("%d ", i++);

    	    i /= 2;

    	    count++;
	
	if ( count == 5)
	    break;
	}	    
    }
    return 0;
}
