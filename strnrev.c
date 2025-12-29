#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],r[100];
	int i,j,l;
	printf("enter string\n");
	scanf("%[^\n]",s);
	l=strlen(s);
	j=0;
	for(i=l-1;i>=0;i--)
	{
		r[j]=s[i];
		j++;
	}
	r[j]='\0';
	printf("reverse is %s",r);
	return 0;
}
