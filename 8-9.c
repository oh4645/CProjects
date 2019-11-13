#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
<<<<<<< HEAD
    int i, j, x = 0, y = 0, move;
=======
    int i, j, x = 0, y = 0;
>>>>>>> 9b962d62966e84e2f12f7d48b2787b0a026c2394
    char k = 'A';
    char field[10][10];
    bool down, up, right, left;

    for (i = 0; i < 10; i++) 
	//initialization every element of array "field" into '.'.
    {
	for (j = 0; j < 10; j++)
	{
	    field[i][j] = '.';
	}
    }

    srand((unsigned) time(NULL));//initializes C's random number generator.
    
    

    field[x][y] = k;//staring point marked as 'A'.



    for(;;)
    {
	down = false;
	up = false;
	right = false;
	left = false;
	move = 0;
	
	if ((y < 9) && (field[x][y + 1] == '.'))
	   right = true;

	if ((x < 9) && (field[x + 1][y] == '.'))
	   down = true;

	if ((y > 0) && (field[x][y - 1] == '.'))
	   left = true;

	if ((x > 0) && (field[x - 1][y] == '.'))
	   up = true;

	move = rand() % 4;

	switch (move)
	{
	    case 1: 
		{
		    if (right)
		    field[x][++y] = ++k;
		    break;
		}
		break;
	     case 2:
		{
		    if (down)
		    field[++x][y] = ++k;
		    break;
		}
		break;
	    case 3:
		{
		    if (left)
		    field[x][--y] = ++k;
		    break;
		}
		break;
	    case 0:
		{
		    if (up)
		    field[--x][y] = ++k;
		    break;
		}
		break;
	}
	if (up + down + left + right == 0)
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
