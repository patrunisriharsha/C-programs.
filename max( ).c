#include<stdio.h>
int max(int , int);
int main()
{
	int a,b,x;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	x=max(a,b);
	printf("%d",x);
}
int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}
