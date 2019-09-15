#include<stdio.h>
int sum(int,int);
int main()
{int j=0;
	int s=0;
	int a,b;
	printf("enter the value of a & b");
	scanf("%d %d",&a,&b);
	s=sum(a,b);
	printf("sum = %d",s);
printf("j = %d",j);	
}
int sum(int x,int y){ int j=10;
	int sum=0;
	sum=x+y;
	return sum;
}
