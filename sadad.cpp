#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{int i=1,n,fact=1;
printf("enter the number wose factorial you want to calculate");
scanf("%d",&n);
fact=factorial(n);
printf("the factorial of given number is=%d",fact);
getch();
return 0;
}
int factorial(int n)
{int i=1,fact=1;
while(i<=n)
{
fact=i*fact;
i++;

}
return fact;
}
