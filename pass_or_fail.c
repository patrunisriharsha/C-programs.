#include <stdio.h>
int main()
{
	int sub1,sub2,sub3,t;
	printf("subject1 marks");
	scanf("%d",&sub1);
	printf("subject2 marks");
	scanf("%d",&sub2);
	printf("subject3 marks");
	scanf("%d",&sub3);
	t=sub1+sub2+sub3;
	(t<40)?printf("fail\n"):printf("pass\n");
	return 0;
	
}
