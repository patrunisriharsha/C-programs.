#include<stdio.h>
int main()
{
	int n,r=0,x=0;
	printf("enter a num");
	scanf("%d",&n);
	while(n!=0)
	{
		x=n%10;
		r=r*10+x;
		n=n/10;
	}
	printf("%d\n",r);
	return 0;
		
}
