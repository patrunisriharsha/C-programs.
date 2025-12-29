#include <stdio.h>
int main()
{
	float h;
	printf("enter height");
	scanf("%f",&h);
	if(h>165)
	{
		printf("tall");
	}
	else if(h>=150 && h<= 164)
	{
		printf("avg height");
	}
	else
	{
		printf("short");
	}
	return 0;
}
