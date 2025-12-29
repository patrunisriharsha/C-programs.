#include<stdio.h>
int main()
{
	int a[100][100], b[100][100], C[100][100];
	int r,c,i,j;
	printf("enter no.of rows and columns ");
	scanf("%d %d",&r,&c);
	printf("enter elements in 1st matrix\n");
		for(i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
	}
}   
    printf("enter elements in 2nd matrix\n");

		for(i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
		scanf("%d",&b[i][j]);
	}
}
  printf("\nSum of two matrices:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            C[i][j] = a[i][j] + b[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
