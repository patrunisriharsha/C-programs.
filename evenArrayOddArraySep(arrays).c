#include<stdio.h>
int main()
{
int a[100],e[100],o[100];
int n,i,ec=0,oc=0;
printf("enter number of elements in array ");
scanf("%d",&n);
printf("enter elements in array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
	if(a[i]%2==0)
{
	e[ec]=a[i];
	ec++;
}
else
{
	o[oc]=a[i];
	oc++;
}
}
printf("even array:");
for(i=0;i<ec;i++)
{
	printf("\n%d",e[i]);
}
printf("\nodd array:",o[i]);
for(i=0;i<oc;i++)
{
	printf("\n%d",o[i]);
}
return 0;
}
