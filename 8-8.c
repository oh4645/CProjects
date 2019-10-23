#include <stdio.h>

int main(void)
{
    int i, j;
    float score[5][5], student_total[5] = {0.0f}, quiz_total[5] = {0.0f},
	  high_score[5], low_score[5];

    for (i = 0; i < 5; i++)
    {
	printf("Enter student %d scores: ", i + 1);

	for(j = 0; j < 5; j++)
	{
	    scanf(" %f", &score[i][j]);
	}
    }
    
    for (i = 0; i < 5; i++)
    {
	for (j = 0; j < 5; j++)
	{
	    student_total[i] += score[i][j];
	    quiz_total[i] += score[j][i];
	    	    
	}
	high_score[i] = score[0][i];
	low_score[i] = score[0][i];

	for (j = 0; j < 5; j++)
	{
	    if (high_score[i] < score[j][i])
		high_score[i] = score[j][i];

	    if (low_score[i] > score[j][i])
		low_score[i] = score[j][i];
	}
    
    }
    printf("Student quiz1 quiz2 quiz3 quiz4 quiz5 Total  Average\n");

    for (i = 0; i < 5; i++)
    {
	printf("%7d ", i + 1);

	for (j = 0; j < 5; j++)
	{
	    printf("%5.2f ", score[i][j]);
	}
	printf("%5.2f %7.2f\n", student_total[i], student_total[i] / 5);
    }

    printf("\nHighest ");
    for (i = 0; i < 5; i++)
    {
	printf("%5.2f ", high_score[i]);
    }
    printf("\n");

    printf(" Lowest ");
    for (i = 0; i < 5; i++)
    {
	printf("%5.2f ", low_score[i]);
    }
    printf("\n");

    printf("Average ");
    for (i = 0; i < 5; i++)
    {
	printf("%5.2f ", quiz_total[i] / 5);
    }
    printf("\n");





    return 0;

}
