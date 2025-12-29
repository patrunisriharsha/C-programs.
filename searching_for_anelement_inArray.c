#include<stdio.h>
int main()
{
	int array[20];
	int i,n,x,j,f=0;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter elements");
	printf("enter element you want");
	scanf("%d",&x);
		for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(j=0;j<n;j++)
	{
		if(array[j]==x)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	printf("element found");
	else
	printf("element not found");
}
