#include <stdio.h>
int main(void)
{
    int i;
    char command;

    printf("Enter an integer: ");
    i = getchar();

    printf("Enter a command: ");
    
    command = getchar();

    printf("%c\n", command);

    return 0;

}
