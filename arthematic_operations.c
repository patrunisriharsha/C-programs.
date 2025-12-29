#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	float g;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a%b;
	g=(float)a/b;
	printf("sum is %d \n",c);
	printf("difference is %d \n",d);
	printf("product is %d \n",e);
	printf("remainder is %d \n",f);
	printf("division is %f \n",g);
	return 0;
}
