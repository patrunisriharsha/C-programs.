#include<stdio.h>
int main()
{
	int s,r;
	float m;
	printf("enter seconds");
	scanf("%d",&s);
	m=s/60;
	r=s%60;
	printf("mins is:%f \n",m);
	printf("remaining sec is:%d",r); 
	return 0;
}
