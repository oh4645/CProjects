#include <stdio.h>
int main(void)
{
    float letter = 0;
    int white_space = 0;
    char ch;
    printf("Enter a sentence: ");
    
    for(;;)
    {
	ch = getchar();
	if ( ch == '\n')
	    break;
	
	letter ++;
	if (ch == ' ')
	{
	    white_space ++;
	}
    }

    printf("Average word length: %.1f\n", (letter - (float) white_space)
	    / (white_space + 1));

    return 0;

}
