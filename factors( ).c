#include<stdio.h>
int factors(int);
int main()
{
	int a;
	factors(a);
}
factors(int a)
{
	int i;
	printf("enter a number ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
{
	if(a%i==0)
	printf("%d ",i);}
}

