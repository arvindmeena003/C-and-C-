#include <stdio.h>
#include<conio.h>
int fact(int n); // FUNCTION DECLARATION
int main()
{
int num, val;
printf("\n Enter the number: ");
scanf("%d", &num);
val=fact(num);
printf("\n Factorial of %d = %d", num, val);
getch();
return 0;
}
int fact(int n)
{
if(n==1)
return 1;
else
fact(n)=n*fact(n-1);
return fact(n);
}
