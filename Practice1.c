#include<stdio.h>
int main(void)
{
	int x, y;
	printf("정수 1을 입력해주세요");
	scanf("%d",&x);
	printf("정수 2를 입력해주세요");
	scanf("%d",&y);
	if(x>y)
	{
	printf("%d\n",y);
	printf("%d\n",x);
	}	
	else
	{
	printf("%d\n",y);
        printf("%d\n",x);
	}
return 0;
}
