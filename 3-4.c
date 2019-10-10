#include <stdio.h>
int main(void)
{
	int local_number, group_code, personal_code;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf(" ( %d ) %d - %d", &local_number, &group_code, &personal_code);
	
	printf("You entered %d.%d.%d\n", local_number,
	       group_code, personal_code);
	
	return 0;


}
