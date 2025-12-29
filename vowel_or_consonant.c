#include<stdio.h>
int main()
{
	char x,a,e,i,o,u;
	printf("enter a alphabet");
	scanf("%c",&x);
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}
	return 0;
}
