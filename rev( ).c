#include<stdio.h>
int rev(int a);
int main()
{
	int a,x;
	printf("enter a number");
	scanf("%d",&a);
	x=rev(a);
	printf("%d",x);
}
int rev(int a)
{
	int r=0,b;
	while(a>0)
	{
		b=a%10;
		r=r*10+b;
		a=a/10;}
	
	
	return r;
}
