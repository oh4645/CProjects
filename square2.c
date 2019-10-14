#include <stdio.h>
int main(void)
{

    int i, n;
    char ch;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i=1; i <= n; i++)
    {
	if ((i % 24) != 0)
	{
	printf("%10d%10d\n", i, i * i);
	}

	else
	{
	printf("%10d%10d\n", i, i * i);

	do
	printf("Press Enter to continue...");
	ch = getchar();
        while (ch != '\n')
	;
	}
    

    }
    return 0;
}
