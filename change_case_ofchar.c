#include <stdio.h>
int main()
{
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	{
		ch=ch+32;
		printf("respective lower case char is %c",ch);
	}
	else if(ch>=97&&ch<=122)
	{
		ch=ch-32;
		printf("respective upper case char is%c",ch);
	 }
	 else 
	 {
	 	printf("not an alphabet");
	 }
	 return 0;
}
