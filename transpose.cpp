#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100][100];
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
			scanf("%d",&arr[i][j]);
		}
	}
	printf("the matrix is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",&arr[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("the transpose of the matrix is\n");
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			printf("%d",&arr[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	getch();
return 0;
}

