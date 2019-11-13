#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char field[10][10];

    void generate_random_walk(char walk[10][10])
    {
	int i, j, x, y;
	char k = 'A';
	for (i = 0; i < 10; i++) 
	//initialization every element of array "field" into '.'.
    {
	for (j = 0; j < 10; j++)
	{
	    walk[i][j] = '.';
	}
    }



	srand((unsigned) time(NULL));//initializes C's random number generator.
    
    

	walk[0][0] = k;//staring point marked as 'A'.



	for(;;)
	{
	    switch (rand() % 4)
	    {
		case 1: 
		    {
			if (((walk[x][y + 1]) != '.') || (y == 9))
			    break;
		       walk[x][++y] = ++k;
		    }
	        break;

		case 2:
		    {
			if (((walk[x + 1][y]) != '.') || (x == 9))
			    break;
		    
			walk[++x][y] = ++k;
		    }
		break;

		case 3:
		    {
		        if (((walk[x][y - 1]) != '.') || (y == 0))
			    break;
		        walk[x][--y] = ++k;
		    }
		break;

		case 0:
		    {
		    
			if (((walk[x - 1][y]) != '.') || (x == 0))
			    break;
		        walk[--x][y] = ++k;
		    }
		break;

		default:
			    break;		
		    }

		if (((walk[x][y - 1]) != '.') && ((walk[x][y + 1]) != '.') && ((walk[x + 1][y]) != '.') && ((walk[x - 1][y]) != '.'))
		    break;
		if (k == 'Z')
		    break;
	
	}

	return;
    }

    void print_array(char walk[10][10])
    {
    int i, j;
    for(i = 0; i < 10; i++)
    {
	for(j = 0; j < 10; j++)
	{
	    printf("%c ", walk[i][j]);
	}
	printf("\n");
    }
    return;
    }
    
    generate_random_walk(field);
    print_array(field);

    return 0;
}
