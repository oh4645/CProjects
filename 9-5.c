#include <stdio.h>

int main(void)
{
    void create_magic_square(int n, char magic_square[n][n])
    {
	int x, y, i, j;

	for(j = 0; j < n; j++)
	{
	    for(i = 0; i < n; i++)//experimental initialization
	    {
		magic_square[j][i] = 0;
	    }
	}

       	x = 0;
	y = n / 2;
	magic_square[x][y] = 1;
	
	for(i = 2; i <= (n * n); i++)
	{
	    x = x - 1;
	    y = y + 1;
	
	    if (x < 0)
		x = (x + n) % n;
	    else;

	    if (x > 4)
		x = x % n;
	    else;

	    if (y < 0)
		y = (y + n) % n;
	    else;

	    if (y > 4)
		y = y % n;
	    else;

	    if (magic_square[x][y] == 0)
	    ;    
	    else
	    {
		x = x + 2;
		y = y - 1;
	    }

	    if (x < 0)
		x = (x + n) % n;
	    else;

	    if (x > 4)
		x = x % n;
	    else;

	    if (y < 0)
		y = (y + n) % n;
	    else;

	    if (y > 4)
		y = y % n;
	    else;

	    magic_square[x][y] = i;
	}
    return;

    }

    void print_magic_square(int n, char magic_square[n][n])
    {
	int i, j;
          for (i = 0; i < n; i++)
	{
	    for (j = 0; j < n; j++)
	    {
		printf("%5d", magic_square[i][j]);
	    }
	    printf("\n");
	}	

	printf("\n");	
	return;
    }

    int square_size;
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &square_size);
    char magic_square[square_size][square_size];    
    create_magic_square(square_size, magic_square);
    print_magic_square(square_size, magic_square);

    return 0;
}
