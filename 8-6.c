#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch, message[100];
    int i, count = 0;

    printf("Enter message: ");
    for(i = 0; ch != '\n'; i++)
    {
	ch = getchar();
	message[i] = toupper(ch);
	count += 1;
    }
    
    count--;

    for(i = 0; i < count; i++)
    {
    switch (message[i])
	{
	    case 'A':
		message[i] = '4';
		break;
	    case 'B':
		message[i] = '8';
		break;
	    case 'E':
		message[i] = '3';
		break;
	    case 'I':
		message[i] = '1';
		break;
	    case 'O':
		message[i] = '0';
		break;
	    case 'S':
		message[i] - '5';
		break;
	    default :
		break;
	}
	}
    printf("In B1FF-speak: ");
    for(i = 0; i < count; i++)
    {
	printf("%c", message[i]);
    }
    printf("!!!!!!!!!!\n");
    return 0;
}
