#include<stdio.h>
int main()
{
	char a[100],i,n;
	printf("enter number of elements in string");
	scanf("%d",&n);
	for(i=0;i<=n+1;i++)
	{
		scanf("%c",&a[i]);
	}
	for(i=0;i<=n+1;i++)
	{
		a[i]++;
	}
	for(i=0;i<=n+1;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
	
}
