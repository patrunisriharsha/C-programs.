#include<stdio.h>
int main()
{
	int array[100][100];
	int r,c,i,j,trace=0;
	printf("enter no.of rows and columns ");
	scanf("%d %d",&r,&c);
	printf("enter elements in matrix ");
	for(i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
		scanf("%d",&array[i][j]);
		if(i==j)
		{
			trace=trace+array[i][j];
		}
		
	}
}
	printf("%d is the trace of the matrix",trace);
	return 0;
}
