#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;
bool underflow = false, overflow = false;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    char brace;
    bool validity = true, open;

    printf("Enter parentheses and/or braces: ");
    for(;;)
    {
	open = true;
	brace = getchar();
	switch (brace)
	{
	    case '(': case '{': case '[':
		open = true;
		push(brace);
		break;
	    case ')': 
		open = false;
		brace = '(';
		break;
	    case '}': 
		open = false;
		brace = '{';
		break;
	    case ']':
		open = false;
		brace = '[';
		break;
	    case '\n':
		break;
	    default: 
		validity = false;
		break;
	}
	if (open == false)
	    if (brace != pop())
		validity = false;

	if (validity == false)
	    break;
	if (brace == '\n')
	    break;
	if (underflow)
	    break;
	if (overflow)
	    break;
    }

    if (overflow)
	printf("Stack overflow\n");

    else if (is_empty() && (underflow == false) && (validity == true))
    {
	printf("Parentheses/braces are nested properly\n");
    }

    else
	printf("Parentheses/braces aren't nested properly\n");



    return 0;
}

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

void push(char ch)
{
    if (is_full())
	stack_overflow();
    else
	contents[top++] = ch;
}

char pop(void)
{
    if (is_empty())
	stack_underflow();
    else
	return contents[--top];
}

void stack_overflow(void)
{
    overflow = true;
}

void stack_underflow(void)
{
    underflow = true;
}

