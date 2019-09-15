#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	if(a==b&& b==c && c==d)
	printf("YES");
	else if(a<b && (c==0 || c<d))
	printf("NO");
	else if((a+c)>=(b+d))
	printf("NO");
	else if(a<b && c>d)
		printf("YES");
	else if(a>b && (d==0 || c>d))
	printf("NO");
	else if((a+c)<=(b+d))
	printf("NO");
	else if(a>b && c<d)
	printf("YES");
	return 0;
}
