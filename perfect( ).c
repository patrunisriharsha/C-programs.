#include<stdio.h>
int perfect(int);
int main()
{
	int a,b,x;
	printf("enter range of numbers ");
	scanf("%d%d",&a,&b);
    printf("perfect numbers between %d and %d are: ",a,b);
    for(x=a;x<=b;x++)
    {
    	if(perfect(x))
    	printf("%d ",x);
	}
}
int perfect(int a)
{
	int s=0,i;
	for(i=1;i<=a-1;i++)
{
	if(a%i==0)
	s=s+i;
}
	if(s==a)
	return 1;
	else 
	return 0;
	
}
