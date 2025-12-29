#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three sides of triangle");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c)
	{
		printf("equilateral triangle");
	}
	else if(a!=b && b!=c && a!=c)
	{
		printf("scalene triangle");
	}
	else
		{
		printf("isocles triangle");
	
	}
	return 0;
}

