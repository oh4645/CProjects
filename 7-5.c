#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch = ' ';
    int point = 0;

    printf("Enter a word: ");
    
    while (ch != '\n')
    {
    ch = getchar();
    
    switch (toupper(ch))
    {
	case 'A':
	case 'E':
	case 'I':
	case 'L':
	case 'N':
	case 'O':
	case 'R':
	case 'S':
	case 'T':
	case 'U': point += 1;
	    break;
	case 'D':
	case 'G': point += 2;
	    break;
	case 'B':
	case 'C':
	case 'M':
	case 'P': point += 3;
	    break;
	case 'F':
	case 'H':
	case 'V':
	case 'W':
	case 'Y': point += 4;
	    break;
	case 'K': point += 5;
	    break;
	case 'J':
	case 'X': point += 8;
	    break;
	case 'Q':
	case 'Z': point += 10;		  
	    break;
    }

    }
    printf("Scrabble value: %d\n", point);
    
    return 0;
}
