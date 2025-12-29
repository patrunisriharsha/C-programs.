#include<stdio.h>
int main()
{
	int n,i=2,f=0;
    printf("enter a number");
    scanf("%d",&n);
   while (i<n)
	{
		if(n%i==0)
		{
			f=1;
			break;
		}
		i=i+1;
	}
	if(f==0)
	printf("%d is a prime number",n);
	else
		printf("%d is not a prime number",n);
	return 0;
}
