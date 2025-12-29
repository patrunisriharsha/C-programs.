#include<stdio.h>
int main()
{
	float array[100];
	int n,i,count=0;
	float a;
	printf("enter nunber of elements in array ");
	scanf("%d",&n);
	printf("enter elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&array[i]);
	}
	printf("enter float value to check occurance ");
	scanf("%f",&a);
	for(i=0;i<n;i++)
	{
		if(array[i]==a)
		{
			count++;
		}
	}
	printf("occurance of float value entered is %d",count);
	return 0;
}
