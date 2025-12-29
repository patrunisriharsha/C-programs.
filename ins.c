#include<stdio.h>
int main()
{
	int a[100],n,i,poss,element;
	scanf("%d",&n);
{
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	}
	scanf("%d",&poss);
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

	
