#include<stdio.h>
#include<conio.h>
int main()
{
	int r;
	float area;
	float circumfarance;
	printf("enter the radius\n ");
	scanf("%d",&r);
	area=3.14*r*r;
	circumfarance=2*3.14*r;
	printf("the area of circle is=%f\n",area);
	printf("\nthe area of circle is=%f",circumfarance);
	getch();
	return 0;
}
