#include<stdio.h>
#include<conio.h>
int main()
{
	char str[100];
	gets(str);
	printf("%-8.6s",str);
	getch();
	return 0;
}
