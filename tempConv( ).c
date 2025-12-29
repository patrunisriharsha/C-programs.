#include<stdio.h>
float tempConv(float);
int main()
{
	float f,x;
	printf("enter temperature in f ");
	scanf("%f",&f);
	printf("%.2f",tempConv(f));
}
float tempConv(float f)
{
	float c;
	c=(f-32)/1.8;
	return c;
}
