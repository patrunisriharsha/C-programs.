#include<stdio.h>
int main()
{
	int a[100],n,i,poss,element;
	printf("enter size of array ");
	scanf("%d",&n);
	printf("enter elements in array \n");
{
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	}
	printf("enter position of element you want to insert");
	scanf("%d",&poss);
	printf("enter element you want to enter");
	scanf("%d",&element);
for(i = n; i > poss; i--)
    a[i] = a[i-1];

	a[poss]=element;
	n++;
	printf("array after insertion");
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	return 0;
}

	
	



