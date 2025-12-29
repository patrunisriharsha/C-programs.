#include<stdio.h>
int main()
{
	int n,i,j;
	float sum=0.0,fact=1,term;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
	{
			fact=fact*j;}
	}
	term =(float)i/fact;
	sum=sum+term;
printf("sum=%.4f",sum);
return 0;
}
