#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int i,flag=0;
	printf("enter string 1\n");
	scanf("%s",s1);
	printf("enter string 2\n");
	scanf("%s",s2);
//	if(strcmp(s1,s2)==0)
//	printf("strings are equal");
//	else
//	printf("strings are not equal");
for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
{
	if(s1[i]!=s2[i])
	{
		flag=1;
		break;
	}
	
}
if(flag==0)
{
	printf("equal strings");
}
else
printf("strings are not equal");

	return 0;
}
