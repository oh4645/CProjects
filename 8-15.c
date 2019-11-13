#include <stdio.h>

int main(void)
{
    int n, i, letter_count;
    char ch, message[80];

    printf("Enter message to be encrypted: ");
    for(i = 0; i < 80; i++)
    {
	ch = getchar();
	if (ch == '\n')
	    break;
	letter_count++;
	message[i] = ch;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);

    printf("Encrypted message: ");
    for(i = 0; i < letter_count; i++)
    {
	if (message[i] <= 'Z' && message[i] >= 'A') 
	{
	   message[i] = ((message[i] - 'A') + n) % 26 + 'A';
	}
	if (message[i] <= 'z' && message[i] >= 'a')
	{
	    message[i] = ((message[i] - 'a') + n) % 26 + 'a';
	}
	printf("%c", message[i]);
    }
    printf("\n");


    return 0;

}
