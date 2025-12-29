#include<stdio.h>
int main ()
{
	int y;
	printf("enter year");
	scanf("%d",&y);
	(y%4==0)?printf("leap year \n"):printf("not a leap year \n");
	return 0;
}
