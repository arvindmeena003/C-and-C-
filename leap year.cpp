#include<stdio.h>
int main()
{
	int x;
	printf("enter the year\n");
	scanf("%d",&x);
		if(x%100==0)
		{
			if(x%400==0)
			printf("leap year\n");
			
			else
			printf("not a leap year");
			//break;
		}
		if(x%4==0)
			printf("leap year\n");
	else	
	printf("not a leap year");
return 0;
}
