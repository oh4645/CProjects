#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i, j, x = 0, y = 0;
    char k = 'A';
    char field[10][10];

    for (i = 0; i < 10; i++) 
	//initialization every element of array "field" into '.'.
    {
	for (j = 0; j < 10; j++)
	{
	    field[i][j] = '.';
	}
    }

    srand((unsigned) time(NULL));//initializes C's random number generator.
    
    

    field[0][0] = k;//staring point marked as 'A'.



    for(;;)
    {
	switch (rand() % 4)
	{
	    case 1: 
		{
		    if (((field[x][y + 1]) != '.') || (y == 9))
			break;
		   
		    field[x][++y] = ++k;
		}
	        break;

	    case 2:
		{
		    if (((field[x + 1][y]) != '.') || (x == 9))
			break;
		    
		    field[++x][y] = ++k;
		}
		break;

	    case 3:
		{
		    
		    if (((field[x][y - 1]) != '.') || (y == 0))
			break;
		
		    field[x][--y] = ++k;
		}
		break;

	    case 0:
		{
		    
		    if (((field[x - 1][y]) != '.') || (x == 0))
			break;
		    
		    field[--x][y] = ++k;
		}
		break;

	    default:
			break;		
	}

	if (((field[x][y - 1]) != '.') && ((field[x][y + 1]) != '.') && ((field[x + 1][y]) != '.') && ((field[x - 1][y]) != '.'))
	    break;
	if (k == 'Z')
	    break;
	
    }
    for(i = 0; i < 10; i++)
    {
	for(j = 0; j < 10; j++)
	{
	    printf("%c ", field[i][j]);
	}
	printf("\n");
    }
    return 0;
}
