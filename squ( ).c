#include<stdio.h>
int squ(int);
int main()
{
	int x,a;
	printf("enter a number ");
	scanf("%d",&a);
	x=squ(a);
	printf("%d",x);
}
int squ(int a)
{
	int b;
	b=a*a;
	return b;
}
