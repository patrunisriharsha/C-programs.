#include<stdio.h>
int main(){
	float i,p,r;
	int t;
	printf("enter principal amount");
	scanf("%f",&p);
	printf("enter time in years");
	scanf("%d",&t);
	printf("enter rate");
	scanf("%f",&r);
	i=(p*t*r)/100;
	printf("simple interest is %f",i);
	return 0;
}
