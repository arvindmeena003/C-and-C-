#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,j,count;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
{count=0;
	for(j=2;j<i;j++)
	{
	if(i%j==0)
	count=1;
	break;
	
	
}

if(count==0)
printf("%d,",i);
}
return 0;
}
