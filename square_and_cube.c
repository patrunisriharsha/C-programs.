#include <stdio.h>
int main()
{
	float n,s,c;
	printf("enter a number = ");
	scanf("%f",&n);
	s=n*n;
	c=s*n;
	printf("the square is:%f \n",s);
	printf("the cube is:%f",c);
	return 0;
}
