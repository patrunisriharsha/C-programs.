#include<stdio.h>
int fact(int);
int main()
{
	int n,r;
	printf("enter values of n and r ");
	scanf("%d%d",&n,&r);
	printf("%d",fact(n)/(fact(n-r)*fact(r)));
}
int fact(int a)
{
	int n,b=1,i;
	if(n==0)
	return 1;
	for(i=a;i>=1;i--)
{	b=b*i;
}
	return b;
	
}
