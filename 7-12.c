#include <stdio.h>
int main(void)
{
    float operand1, operand2;
    char operator = ' ';

    printf("Enter an expression: ");
    scanf("%f", &operand1);

    while (operator != '\n')
    {
    scanf("%c", &operator);

    if (operator != '\n')
    {
    scanf("%f", &operand2);
    
    switch (operator)
    {
	case'+': 
	    operand1 += operand2;
	break;
	case'-':
	    operand1 -= operand2;
	break;
	case'*':
	    operand1 *= operand2;
	break;
	case'/':
	    operand1 /= operand2;
	break;
    }
    }    
    else
	;
    }
    
    printf("Value of expression: %f\n", operand1);

    return 0;
}
