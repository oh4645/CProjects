#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int score[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char ch = ' ';
    int point = 0;

    printf("Enter a word: ");
    
   for(;;)
    {
    ch =getchar();
    if (ch == '\n')
	break;

    ch = toupper(ch) - 'A';

    point += score[ch];
    }

    
    printf("Scrabble value: %d\n", point);
    
    return 0;
}
