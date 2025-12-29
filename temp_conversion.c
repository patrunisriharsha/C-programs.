#include<stdio.h>
int main()
{
	int f;
	float c;
	printf("enter temperature in f");
	scanf("%f",&f);
	c=0.57*(f-32);
	printf("the temp in c is %f",c);
	return 0;
}
