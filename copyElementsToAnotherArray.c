#include<stdio.h>
int main()
{
	int a[100];
	int b[100];
	int i,n,m;
	printf("enter number of elements in a array");
	scanf("%d",&n);
	printf("enter elements in a array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter number of elements in b array");
	scanf("%d",&m);
	printf("enter numbers of b array");
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
    printf("Elements copied to array b are:");
    for (i = 0;i<m;i++)
	 {
        printf("%d ",b[i]);
     }
	return 0;
	
}
