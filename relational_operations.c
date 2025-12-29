#include <stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	printf("a==b: %s\n",(a==b)?"true":"false");
	printf("a!=b: %s\n", (a!=b)?"true":"false");
	printf("a>b: %s\n",(a>b)?"true":"false");
	printf("a<b: %s\n",(a<b)?"true":"false");
	printf("a>=b: %s\n",(a>=b)?"true":"false");
	printf("a<=b: %s\n",(a<=b)?"true":"false");
	return 0;
}


