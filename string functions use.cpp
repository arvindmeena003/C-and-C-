#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,fact=1;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	
		
			fact=fact*i;
			if(fact<=n)
		printf("%d ",fact);
		
	}
			getch();
	return 0;
	
	}
