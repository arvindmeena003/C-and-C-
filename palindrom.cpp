#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{char str[100],e[100];
int d,i;
	printf("enter the string\n");
	gets(str);
	d=strlen(str);
	e[]=strrev(str);
	for(i=0;i<d;i++)
	{
		
	if(str[i]==e[i])
	printf("palindrom");
	else
	printf("not ");
	getch();
	return 0;
}
