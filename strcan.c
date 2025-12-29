#include<stdio.h>
#include<string.h>
int main()
{
	char string1[100],string2[100];
	char x;
	int i,l1,l2;
	printf("enter string1\n");
	gets(string1);
	printf("enter string2\n");
	gets(string2);
//	x=strcat(string1,string2);
//	printf("%s",string1);
	// or
	l2=strlen(string2);
	l1=strlen(string1);
	for(i=0;i<=l2;i++)
	{
		string1[l1+i]=string2[i];
	}
	printf("%s",string1);
	return 0;
}
