#include <stdio.h>
#include <stdbool.h>

#define MAX_DIGITS 10
int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0},
     {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1}, {0, 1, 1, 0, 0, 1, 1},
     {1, 0, 1, 1, 0, 1, 1}, {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0}, 
     {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}};
char digits[4][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
    bool valid;
    char num;
    int i, count, number[MAX_DIGITS] = {0};
    
    printf("Enter a number: ");
    for (i = 0; i < MAX_DIGITS;)
    {
	valid = true;
	num = getchar();
	    switch (num)
	    {
		case '0':
		    number[i] = 0;
		    break;
		case '1':
		    number[i] = 1;
		    break;
		case '2':
		    number[i] = 2;
		    break;
		case '3':
		    number[i] = 3;
		    break;
		case '4':
		    number[i] = 4;
		    break;
		case '5':
		    number[i] = 5;
		    break;
		case '6':
		    number[i] = 6;
		    break;
		case '7':
		    number[i] = 7;
		    break;
		case '8':
		    number[i] = 8;
		    break;
		case '9':
		    number[i] = 9;
		    break;
    		default:
		    valid = false;
		    break;
	    }
	    if(valid)
	    i++;
	
	    if (num == '\n')
	    {
		count = i;
	    }
	    if (num == '\n')
	    break;	
    }
    clear_digits_array();
    
    for (i = 0; i < count; i++)
    {
	process_digit(number[i], i + 1);
    }

    print_digits_array();
    printf("%d\n", count); // line for debug

    return 0;
}

void clear_digits_array(void)
{
    int i, j;
    for(i = 0; i < 4; i++)
    {
	for(j = 0; j < (MAX_DIGITS * 4); j++)
	{
	    digits[i][j] = ' ';
	}
    }
}
/* _
  | |
  |_|*/
void process_digit(int digit, int position)
{
    int i;
    char converted[7];
    
    for(i = 0; i < 7; i++)
    {
	converted[i] = segments[digit][i];
	if (converted[i] == 1)
	{
	    if (i == 0 || i == 3 || i == 6)
		converted[i] = '_';
	    else
		converted[i] = '|';
	}
	else
	    converted[i] = ' ';
    }

    digits[0][position * 4 - 4] = ' ';
    digits[1][position * 4 - 4] = converted[5];
    digits[2][position * 4 - 4] = converted[4];
    digits[3][position * 4 - 4] = ' ';

    digits[0][position * 4 - 3] = converted[0];
    digits[1][position * 4 - 3] = converted[6];
    digits[2][position * 4 - 3] = converted[3];
    digits[3][position * 4 - 3] = ' ';

    digits[0][position * 4 - 2] = ' ';
    digits[1][position * 4 - 2] = converted[1];
    digits[2][position * 4 - 2] = converted[2];
    digits[3][position * 4 - 2] = ' ';
}

void print_digits_array(void)
{
    int i, j;
    for(i = 0; i < 4; i++)
    {
	for(j = 0; j < (MAX_DIGITS * 4); j++)
	{
	    printf("%c", digits[i][j]);
	}
	printf("\n");
    }
}

