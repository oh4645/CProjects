#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int vowel_count = 0;
    char ch = ' ';

    printf("Enter a sentence: ");

    while (ch != '\n')
    {
	ch = getchar();
	switch (toupper(ch))
	{
	    case 'A':
	    case 'E':
	    case 'I':
	    case 'O':
	    case 'U': vowel_count += 1;
	    break;
	    default :
	    ;
	    break;
	}
    }
    
    printf("Your sentence contains %d vowels.\n", vowel_count);
    

    return 0;
}
