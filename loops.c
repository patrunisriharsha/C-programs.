#include<stdio.h>
int main()
{
	int a,i,count=0,sume,sumo;
printf("enter a number ");
scanf("%d",&a);
printf("even numbers upto %d are:",a);
for(i=1;i<=a;i++)
{
if(i%2==0)
printf(" %d",i);
sume=sume+i;}
printf("\nodd numbers upto %d are: ",a);
for(i=0;i<=a;i++)
{
if(i%2!=0)
printf(" %d",i);
sumo=sumo+i;}

for(i=1;i<=a;i++)
{
if(i%3==0 && i%5==0)
count++;}
printf("\n\n%d numbers divisible by 3 and 5 upto %d",count,a);

if(sume>sumo)
printf("\n\nsum of even numbers(i.e %d) is greather than sum of odd numbers(i.e %d) upto %d",sume,sumo,a);
else
printf("\n\nsum of even numbers(i.e %d) is less than sum of odd numbers(i.e %d) upto %d",sume,sumo,a);
return 0;}
