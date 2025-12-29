#include<stdio.h>
int main()
{
	int n,d,f=0;
	printf("enter a number");
	scanf("%d",&n);
	while (n>0)
	{
		d=n%10;
		if(d==0)
		{
			f=1;
			break;
		}
		n=n/10;
	}
	if(f==1)
	printf("duck number");
	else
	printf("not a duck number");
	return 0;
}


