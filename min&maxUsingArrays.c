#include<stdio.h>
int main()
{
	int a[100],max,min,n,i;
	printf("enter number of elements in array ");
	scanf("%d",&n);
	printf("enter elements in array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	min=a[0];
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
		if(min>a[i])
		min=a[i];
	}
	printf("max: %d\n",max);
	printf("min: %d",min);
	return 0;
}
