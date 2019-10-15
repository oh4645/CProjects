#include <stdio.h>
int main(void)
{

    printf("Size of int: %lu\n", (unsigned long) sizeof(int));
    printf("Size of short: %lu\n", (unsigned long) sizeof(short));
    printf("Size of long: %lu\n", (unsigned long) sizeof(long));
    printf("Size of float: %lu\n", (unsigned long) sizeof(float));
    printf("Size of double: %lu\n", (unsigned long) sizeof(double));
    printf("Size of long double: %lu\n", (unsigned long) sizeof(long double));
    return 0;
}
