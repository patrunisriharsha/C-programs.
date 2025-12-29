#include<stdio.h>
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	(a%2==0)?printf("divisibe by 2\n"):printf("not divisible by 2\n");
	(a%4==0)?printf("divisible by 4\n"):printf("not divisible by 4\n");
	return 0;
 
}
