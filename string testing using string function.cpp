#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char s1[100],s2[100];
	gets(s1);
	strcpy(s2,s1);
	strrev(s2);
	if(strcmp(s1,s2)==0)
	printf("string is palindrom");
	else
	printf("not palindrome");
	getch();
	
return 0;
}
