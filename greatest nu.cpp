#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter a\n");
	scanf("%d",&a);
		printf("enter b\n");
	scanf("%d",&b);
		printf("enter c\n");
	scanf("%d",&c);
	if(a>b&&b>c)
	{
		printf("a is greatest");
		
	}
	if(b>a&&a>c)
	{
		printf("b is greatest");
		
	}
	else
	printf("c is greatest");
	getch();
	return 0;
}
