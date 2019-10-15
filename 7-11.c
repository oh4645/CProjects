#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char first, ch;

    printf("Enter a first and last name: ");

    while ((ch = getchar()) == ' ')
	;

    first = toupper(ch);


    while ((ch = getchar()) != ' ')
	;

    ch = getchar();
    printf("%c", toupper(ch));

    while ((ch = getchar()) != '\n')
	{
	    if (ch != ' ')
		printf("%c", ch);
	}

    printf(", %c.\n", first);

    return 0;
}
