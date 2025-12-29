#include<stdio.h>
int fact(int);  
int main()

{
	int a,x;
	printf("enter a");
	scanf("%d",&a);
	x=fact(a);
	printf("factorial of %d : %d",a,x);
}
  int fact(int a)
 {
 	int b=1,i;
	for(i=1;i<=a;i++)
	{
		b=b*i;
		}
	 return b;


}
