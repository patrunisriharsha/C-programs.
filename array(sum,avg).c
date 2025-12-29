#include<stdio.h>
int main()
{
	int a[100];
	int n,i,sum=0;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("%d\n",sum);
	printf("avg: %.2f",(float)sum/n);
	return 0;
	
}
