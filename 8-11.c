#include <stdio.h>
int main(void)
{   
    int i, count = 0;
    char ch = ' ', phone_number[15];
    
    printf("Enter phone number: ");

    for (i = 0; i < 15; i++)
    {
	ch = getchar();
	if (ch == '\n')
	    break;

	count++;
    if ((ch == 'A') || (ch == 'B') || (ch == 'C'))
    {
	ch = '2';
    }

    else if ((ch == 'D') || (ch == 'E') || (ch == 'F'))
    {
	ch = '3';
    }
    else if ((ch == 'G') || (ch == 'H') || (ch == 'I'))
    {
	ch = '4';
    }
    else if ((ch == 'J') || (ch == 'K') || (ch == 'L'))
    {
	ch = '5';
    }	
    else if ((ch == 'M') || (ch == 'N') || (ch == 'O'))
    {
	ch = '6';
    }
    else if ((ch == 'P') || (ch == 'S') || (ch == 'R'))
    {
	ch = '7';
    }
    else if ((ch == 'V') || (ch == 'T') || (ch == 'U'))
    {
	ch = '8';
    }
    else if ((ch == 'W') || (ch == 'X') || (ch == 'Y'))
    {
	ch = '9';
    }	
	phone_number[i] = ch;
    }

    printf("In numeric form: ");

    for (i = 0; i < count; i++)
    {
	printf("%c", phone_number[i]);
    }

    printf("\n");

    return 0;

}
