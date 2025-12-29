#include<stdio.h>
int main()
{
	char a;
	printf("enter");
	scanf("%c",&a);
	if(a>=65&&a<=90)
	{
		printf("upper case character");
	}
	if(a>=97&&a<=122)
	{
		printf("lower case character");
	}
	return 0;
}
