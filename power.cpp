#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,a,b;
	int r;
	int t;
	printf("enter the x and y");
	scanf("%d%d",&x,&y);
	a=x%10;
	b=y%10;
	r=a*b;
	t=r%10;
	printf("%d",t);
	return 0;
}
