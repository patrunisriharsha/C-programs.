#include<stdio.h>
int main()
{
	int a;
	printf("enter age");
	scanf("%d",&a);
	(a>=18)?printf("%d eligible for voting \n",a):printf("%d not eligible for voting \n",a);
	return 0;
}
