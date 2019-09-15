#include<stdio.h>
#include<conio.h>
int main()
{
	int num[100],i,sum=0;
	float per;
	printf("enter the number of five sub\n");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&num[i]);
	sum=sum+num[i];
	}
	

	
printf("the sum of five sub is=%d",sum);
per=(sum/500)*100;
printf("the per of five sub is=%f",per);
return 0;
}
