#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,D,root1,root2,realpart,imgpart;
	printf("enter coefficients of a,b and c");
	scanf("%f %f %f",&a,&b,&c);
	D=b*b-4*a*c;
	if(D>0)
	{
		root1=((-b+sqrt(D))/(2*a));
		root2=((-b-sqrt(D))/(2*a));
		printf("roots are real and distinct: %.2f %.2f\n",root1,root2);
	}
	else if(D=0)
	{
		root1=(-b)/(2*a);
		printf("roots are real and equal: %.2f %.2f\n",root1,root1);
		
	}
	else
	{
		realpart=(-b)/(2*a);
		imgpart=sqrt(-D)/(2*a);
		printf("roots are imaginary: %.2f+%.2fi and %.2f-%.2fi\n",realpart,imgpart,realpart,imgpart);
		
	}
	return 0;
}
