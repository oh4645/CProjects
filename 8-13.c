#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int i, count;
    char first, ch, last[20];

    printf("Enter a first and last name: ");

    while ((ch = getchar()) == ' ')
	;

    first = toupper(ch);


    while ((ch = getchar()) != ' ')
	;

    for(i = 0;i < 20; i++)
    {
	ch = getchar();
	if (ch == '\n')
	    break;
	count++;
	if (i == 0)
	ch = toupper(ch);
	last[i] = ch;
    }
    
    printf("You entered the name: ");

    for(i = 0; i < count; i++)
    {
	printf("%c", last[i]);
    }

    printf(", %c.\n", first);

    return 0;
}
