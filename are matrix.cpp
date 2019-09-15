#include<stdio.h>
#include<conio.h>
int main()
{
	int k;
	int i,j,n,m;
	printf("enter the value of n(row)\n");
	scanf("%d",&n);
	printf("enter the value of m(coloumn)\n");
	scanf("%d",&m);
	printf("enter the value of elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&k);
		}
	}
	printf("the matrix is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",k);
			printf("\t");
		}
		printf("\n");
	}
	getch();
return 0;
}
