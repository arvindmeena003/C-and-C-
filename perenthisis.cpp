#include<stdio.h>
#include<string.h>
#define max 10
int main(){
 char arr[max];
gets(arr);
char str[max];
int flag=0;
int top=-1;
for(int i=0;i<strlen(arr);i++)
{
	if(arr[i]=='{' ||arr[i]=='('||arr[i]=='[')
	{ 
		top++;
		str[top]==arr[i];
	
	}
	else if(arr[i]==')' &&(str[top]=='{'||str[top]=='['))
	{
	flag=1;
	
}
	else if(arr[i]=='}' &&(str[top]=='{'||str[top]=='['))
{
		flag=1;
		}
	else if(arr[i]==']' &&(str[top]=='{'||str[top]=='['))
	{
	flag=1;
	
	}
	else top--;
}
if(top==-1 && flag==0)
printf("correct");
else
printf("incorrect");

return 0;
}
