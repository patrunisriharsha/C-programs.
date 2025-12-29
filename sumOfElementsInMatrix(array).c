#include<stdio.h>
int main()
{
	int array[100][100];
	int row,col,i,j,sum=0;
	printf("enter no.of rows and columns ");
	scanf("%d %d",&row,&col);
	printf("enter elements");
	for(i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
		scanf("%d",&array[i][j]);
		sum=sum+array[i][j];}
		
	}
	printf("%d", sum);
	return 0;
}
