#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    int letter_count[26] ={0}, i;
    char ch;
    bool check;
    printf("Enter first word: ");
    for(;;)
    {
	ch = getchar();
	if (ch == '\n')
		break;
	if (isalpha(ch))
	{
	    ch = tolower(ch) - 'a';
	    letter_count[ch] += 1;
	}
    }

    printf("Enter second word: ");
    for(;;)
    {
	ch = getchar();
	if (ch == '\n')
	    break;
	if (isalpha(ch))
	{
	    ch = tolower(ch) - 'a';
	    letter_count[ch] -= 1;
	}
    }
    
    for(i = 0; i < 26; i++)
    {
	if (letter_count[i] != 0)	
	    check = false;
    }

    if (check)
    {
	printf("The words are anagrams.\n");
    }

    else
	printf("The words are not anagrams.\n");

    return 0;

}
