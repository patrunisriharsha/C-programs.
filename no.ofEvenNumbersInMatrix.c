#include<stdio.h>
int main()
{
	int array[100][100];
	int r,c,i,j,count=0;
	printf("enter no.of rows and columns");
	scanf("%d %d",&r,&c);
	printf("enter elements in matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",array[i][j]);
		}
		if(array[i][j]%2==0)
		{
			count++;
		}
	}
	prinf("%d",count);
	return 0;
}
