#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
	int d,n;
	printf("enter the number\n");
	scanf("%d",&n);
	d=fact(n);
	printf("the fact of number is=%d",d);
		
	
			getch();
	return 0;
	
	}
	int fact(int a)
	
	{
		int s;
		if(a==0)
		return 1;
		else
	s=a*fact(a-1);
	return s;
	}
