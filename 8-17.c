#include <stdio.h>

int main(void)
{
    int square_size, magic_square[99][99] = {0}, i, j, x, y, n;
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &square_size);
    
    int debug_sum[31] = {0};
    x = 0;
    y = square_size / 2;
    magic_square[x][y] = 1;
    for(n = 2; n <= (square_size * square_size); n++)
    {
	x = x - 1;
	y = y + 1;
	
	if (x < 0)
	    x = (x + square_size) % square_size;
	else;

	if (x > 4)
	    x = x % square_size;
	else;

	if (y < 0)
	    y = (y + square_size) % square_size;
	else;

	if (y > 4)
	    y = y % square_size;
	else;

	if (magic_square[x][y] == 0)
	;    
	else
	{
	    x = x + 2;
	    y = y - 1;
	}

	if (x < 0)
	    x = (x + square_size) % square_size;
	else;

	if (x > 4)
	    x = x % square_size;
	else;

	if (y < 0)
	    y = (y + square_size) % square_size;
	else;

	if (y > 4)
	    y = y % square_size;
	else;

        magic_square[x][y] = n;
    }

    for (i = 0; i < square_size; i++)
    {
	for (j = 0; j < square_size; j++)
	{
	    printf("%5d", magic_square[i][j]);
	}
	printf("\n");
    }

    for (i = 0; i < square_size; i++)
    {
	for (j = 0; j < square_size; j++)
	{
	    debug_sum[i] += magic_square[i][j];
	}
	printf("%d ", debug_sum[i]);
    }
    printf("\n");

    return 0;
}
