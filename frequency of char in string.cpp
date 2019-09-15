#include<stdio.h>
int main()
{ 
	int k=0;
	char s[]="abcdefghijklmnopqrstuvwxyz";
	char str[]="neetu meena";	
	int count1=0, count=0,i,j;
for(i=0;i<sizeof(s);i++)
{
	for(j=0;j<sizeof(str);j++)
	{
		if(s[i]==str[j])
		{
			count++;
		}
	}
	if(count>0)
	printf("%c  %d\n",s[i],count);
count=0;
}
//printf("%d",count);
return 0;
}
