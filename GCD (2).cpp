#include<stdio.h>
#include<conio.h>
int gcd(int,int,int);
int main()
{int x,y,rem,g;
printf("enter the number\n");
scanf("%d",&x);
printf("enter the number\n");
scanf("%d",&y);
g=gcd(x,y,rem);
printf("the gcd of the given number is %d",g);
return 0;
}
int gcd(int x,int y,int rem)
{int i;
	for(i=0;rem!=0;i++)
	{rem=x%y;
gcd(y,rem);
}
}
