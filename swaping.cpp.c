#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("entr a and b\n");
	scanf("%d\n%d");
	printf("the value of a=%d and b=%d \n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the value after swaping of a=%d and b=%d ",a,b);
	return 0;
}
