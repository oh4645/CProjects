#include <stdio.h>
#include <stdbool.h>
#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;
bool termination;

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void stack_overflow(void)
{
    printf("Expression is too complex\n");
    termination = true;
}

void stack_underflow(void)
{
    printf("Not enough operands in expression\n");
    termination = true;
}


void push(int i)
{
    if (is_full())
	stack_overflow();
    else
	contents[top++] = i;
}

int pop(void)
{
    if (is_empty())
	stack_underflow();
    else
	return contents[--top];
}

void calculated_value(int value)
{
    printf("Value of expression: %d\n", value);
}

int main(void)
{
    float operand_left_float, operand_right_float;
    int value;
    char ch;
    bool calculated;
    for(;;)
    {
    make_empty();
    termination = false;
    calculated = false;
    printf("Enter an RPN expression: ");
    for(;;)
    {
	scanf(" %c", &ch);
	    switch (ch)
	    {
		case '0':
		    push(0);
		    break;
		case '1':
		    push(1);
		break;
		case '2':
		    push(2);
		    break;
		case '3':
		    push(3);
		    break;
		case '4':
		    push(4);
		    break;
		case '5':
		    push(5);
		    break;
		case '6':
		    push(6);
		    break;
		case '7':
		    push(7);
		    break;
		case '8':
		    push(8);
		    break;
		case '9':
		    push(9);
		    break;
		case '+':
		    value = pop() + pop();
		    push(value);
		    break;
		case '-':
		    operand_right_float = pop();
		    operand_left_float = pop();
		    value = operand_left_float - operand_right_float;
		    push(value);
		    break;
		case '*':
		    value = pop() * pop();
		    push(value);
		    break;
		case '/':
		    operand_right_float = pop();
		    operand_left_float = pop();
		    value = operand_left_float / operand_right_float;
		    push(value);
		    break;
		case '=':
			value = pop();
			calculated_value(value);
			calculated = true;
		    break;
		default:
		    termination = true;
		    break;

	    }
	if (termination || calculated)
	    break;
    }
	if (termination)
	    break;
    }	    
    return 0;
}
