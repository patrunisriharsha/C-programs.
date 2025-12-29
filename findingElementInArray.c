#include<stdio.h>
int main()
{
	int a[100],n,i,x,p=0;
	printf("enter number of elements in array ");
	scanf("%d",&n);
	printf("enter elements in array\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
printf("enter element you want to find ");
scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		p=1;
	}
	if(p=1)
	printf("element found :)");
	if(p=0)
	printf("element not found :(");
	return 0;
}
