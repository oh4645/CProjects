#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    int letter_count1[26], letter_count2[26];

    void read_word(int counts[26])
    {
	char ch;

	for(;;)
	{
	    ch = getchar();
	    if (ch == '\n')
		break;
	    if (isalpha(ch))
		{
		ch = tolower(ch) - 'a';
		counts[ch] += 1;
		}
	}
	return;
    }

    bool equal_array(int counts1[26], int counts2[26])
    {
	int i;
	bool check = true;
	for(i = 0; i < 236; i++)
	{
	    if (counts1[i] != counts2[i])
		check = false;
	}
	return check;   	
    }
    
    printf("Enter first word: ");
    read_word(letter_count1);

    printf("Enter second word: ");
    read_word(letter_count2);

    
    if (equal_array(letter_count1, letter_count2))
    {
	printf("The words are anagrams.\n");
    }

    else
	printf("The words are not anagrams.\n");

    return 0;

}
