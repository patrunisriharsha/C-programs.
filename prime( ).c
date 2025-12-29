#include<stdio.h>
int prime (int);
int main()
{
	int x,a;
	printf("enter a value " );
	scanf("%d",&a);
	if(prime(a))
	printf("%d is a prime number",a);
	else
	printf("%d is not a prime number",a);

}
int prime (int a)
{
	int i;
	if(a<=1)
	return 0;
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		return 0;
	}
	return 1;
}
