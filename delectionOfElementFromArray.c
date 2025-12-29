#include<stdio.h>
int main()
{
	int a[100],n,i,poss;
	printf("enter size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
{
		scanf("%d",&a[i]);}
	printf("enter position of element you want to delete");
	scanf("%d",&poss);
	for(i=poss-1;i<n-1;i++)
	a[i-1]=a[i];
	n--;
	printf("Array after deletion:\n");
for(i=0;i<n;i++){
printf("%d ",a[i]);
}

printf("\n");
return 0;
}

	

