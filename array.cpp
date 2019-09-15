#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int i;
 char string[100];
gets(string);
while(string[i]!='\0')
{
if(string[i]<'a'&string[i]>='A')
string[i]=string[i]+32;
else if(string[i]<'z'&string[i]>='a')
string[i]=string[i]-32;
	i++;
}
puts(string);
getch();
return 0;
}

