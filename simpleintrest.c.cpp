#include<stdio.h>
int main ()
{
	int t;
	float intrest,p,r;
	printf("enter principal amount");
	scanf("%f",&p);
	printf("enter time in years");
	scanf("%d",&t);
	printf("enter rate");
	scanf("%f",&r );
	intrest=(p*t*r)/100;
	printf("your intrest is %f",intrest);
	return 0;
	
}
