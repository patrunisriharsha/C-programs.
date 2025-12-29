#include<stdio.h>
int count(int);
int main()
{
	int a,x;
	printf("enter a number\n");
	scanf("%d",&a);
	x=count(a);
	printf("%d",x);
}
int count(int a)
{
	int c=0,i;
	while(a>0)
	{
		i=a%10;
		c++;
		a=a/10;
		
	}
	return c;
}

