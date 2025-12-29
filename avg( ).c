#include<stdio.h>
int avg(int);
int main()
{
	int n,x;
	printf("enter n value");
	scanf("%d",&n);
	x=avg(n);
	printf("average of first n numbers is: %d",x);
}
int avg(int n)
{
	int i,b=0,c;
	for(i=1;i<=n;i++)
	{
		b=b+i;
	}
	c=b/n;
	return c;
}
