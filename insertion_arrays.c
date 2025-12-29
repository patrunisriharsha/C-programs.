#include<stdio.h>
int main()
{
	int array[20];
	int n,i,element,poss;
	printf("enter number of elements in a array");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("enter the position");
	scanf("%d",&poss);
	printf("enter number to enter");
	scanf("%d",&element);
	for(i=n;i>=poss;i--)
	{
		array[i]=array[i-1];
	}
	array[poss-1]= element;
	n++;
	printf("array after insertion");
	for(i=0;i<n;i++)
	{
		printf(" %d",array[i]);
	}
	return 0;
}
