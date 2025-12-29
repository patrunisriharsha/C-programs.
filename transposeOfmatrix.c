#include<stdio.h>
int main()
{
	int a[100][100],b[100][100];
	int i,j,r,c;
	printf("enter no.of rows and columns ");
	scanf("%d %d",&r,&c);
	printf("enter elements in matrix ");
	for(i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
		
	}
}
	printf("%d",a[j][i]);
	return 0;
	
	
}
