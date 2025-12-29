#include<stdio.h>
#include<string.h>
int main()
{
	int x;
	char name[30];
	printf("enter name\n");
	gets(name);
	x=strlen(name);
	printf("%d",x);
	return 0;
}

//{
//	int i=0,count=0;
//	char name[30];
//	printf("enter string");
//	gets("name");
//	while(i!=0)
//	{
//		count++;
//		i++;
//	}
//	printf("length of string is %d",count);
//  return 0;
// }
