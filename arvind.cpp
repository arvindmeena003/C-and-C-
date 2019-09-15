#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i=0,j=0,pos; 
	char text[100];
	char string[100];
	char newtext[100];
	printf("enter the text\n");
	gets(text);
	printf("enter the string\n");
	gets(string);
	printf("enter the position where u want to insert the string\n");
	scanf("%d",&pos);
	while(text[i]!='\0')
	if(i=pos)
	{newtext[i]=string[j];
	i++;
	j++;
	}
	else
	{newtext[i]=text[i];
	}
	printf("the new text is\n");
	puts(newtext);
	return 0; 
	
}
