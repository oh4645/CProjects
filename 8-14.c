#include <stdio.h>

int main(void)
{
    char ch, word, sentence[100], terminate;
    int i, j, count = 0, wordlength = 0;

    printf("Enter a sentence: ");

    for(i = 0; i < 100; i++)
    {
	ch = getchar();
	if (ch == '!' || ch == '?' || ch == '.')
	    terminate = ch;
	if (terminate == ch)
	    break;
	else
	{	    
	count++;
	sentence[i] = ch;
	}
    }

    printf("Reversal of sentence: ");

    for (i = count-1; i >= 0; i--)
    {
	ch = sentence[i];

	if(ch == ' ')
	{
	    
	    for (j = i + 1; wordlength > 0; j++)
	    {
	    	printf("%c", sentence[j]);
		wordlength--;
	    }
	    printf(" ");
	}

	else if(i == 0)
	{
	    for (j = 0; wordlength + 1 > 0; j++)  //expr2 in the for parenthesis is wordlength + 1 > 0  as the variable 'wordlength' has not yet been added by 1 when i = 0
	    {
		printf("%c", sentence[j]);
		wordlength--;
	    }
	}
	else
	wordlength++;
    }
    printf("%c\n", terminate);
    return 0;
}
