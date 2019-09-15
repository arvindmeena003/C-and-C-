#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
scanf("%d  %d %d",&a,&b,&c);	
if( ((a + b)>c) && ((a + c)>b) && ((b + c)>a) )
{
printf("%d  %d  %d",a,b,c);
printf("\nYes\n");
}
else
{
printf("%d  %d  %d  ",a,b,c);
printf("No\n");
}

return 0;
}

