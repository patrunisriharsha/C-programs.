#include<stdio.h>
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a%3==0 || a%6==0)
	{
		printf("divibible by 3 or 6");
	}
	else
	{
		printf("not dividible by 3 or 6");
	}
	return 0;
	
}
