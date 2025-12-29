#include<stdio.h>
int main()
{
	int r;
	float area,pi=3.14;
	printf("enter radius");
	scanf("%d",&r);
	area = pi*r*r;
	printf("area of circle is %f",area);
	return 0;
}
