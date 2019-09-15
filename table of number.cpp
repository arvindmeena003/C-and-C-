#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,table;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		table=n*i;
		printf("%d\n",table);
	}
	getch();
	return 0;
}
