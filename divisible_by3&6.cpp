#include<stdio.h>
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a%3==0)&(a%6==0)
	{
		printf("divisible by both 3 and 6");
	}
	else
	{
		printf("not divisible by both");
	}
	return 0;
}
