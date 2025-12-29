#include<stdio.h>
int main()
{
	int array[100];
	int n,i,odd,even;
	printf("enter size of array ");
	scanf("%d",&n);
	printf("enter elements in array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		if(array[i]%2==0)
		even++;
		else
		odd ++;
	}
	printf("number of even numbers are %d\n",even);
	printf("number of odd numbers are %d",odd);
	return 0;
}
