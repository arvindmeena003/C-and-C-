#include<stdio.h>
int main()
{
	int x,y;
	int z=1;
	scanf(" %d %d",&x,&y);
	for(int i=0;i<y;i++)
	{
		z=(z*x)%10;
	}
	
	printf("z=%d\n",z);
	int rem=123456789%4;
	
	printf("unit digit=%d",rem);
	return 0;
	
}
