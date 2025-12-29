#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],x[100];
	int i,l;
	printf("enter string in small ");
	scanf("%[^\n]",s);
	l=strlen(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
		s[i]=s[i]-32;
	}
	}
	printf("%s",s);
	return 0;
}
