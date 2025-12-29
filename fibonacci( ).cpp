#include<stdio.h>
void fibonacci(int t);
int main()
{
	int a;
	printf("enter number of terms required");
	scanf("%d",&a);
	printf("first %d terms of series are: ",a);
	fibonacci(a);
}
void fibonacci(int t)
{
 int x=0,b=1,n,i;
 for(i=1;i<=t;i++)
 {
 	printf("%d ",x);
 	n=x+b;
 	x=b;
 	b=n;
 }
}
	
