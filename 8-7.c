#include <stdio.h>

int main(void)
{
    int i, j, matrix[5][5], row_total[5] = {0}, column_total[5] = {0};

    for (i = 0; i < 5; i++)
    {
	printf("Enter row %d: ", i + 1);

	for(j = 0; j < 5; j++)
	{
	    scanf(" %d", &matrix[i][j]);
	}
    }
    printf("\nRow totals:");

    for (i = 0; i < 5; i++)
    {
	for (j = 0; j < 5; j++)
	{
	    row_total[i] += matrix[i][j];
	}
	printf("%d ", row_total[i]);
    }
    printf("\nColumn totals: ");
    
    for (j = 0; j < 5; j++)
    {
	for (i = 0; i < 5; i++)
	{
	   column_total[j] += matrix[i][j];
	}
       printf("%d ", column_total[j]);	
    }
    printf("\n");


    return 0;

}
