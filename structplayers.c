#include<stdio.h>
struct player 
{
	char pname[50];
	char sport[50];
	int score;
};
int main()
{
	struct player p[100];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",p[i].pname);
		scanf("%s",p[i].sport);
		scanf("%d",&p[i].score);
	}
	for(i=0;i<n;i++)
	{
		printf("%s %s %d\n",p[i].pname,p[i].sport,p[i].score);
	}
	return 0;
}
