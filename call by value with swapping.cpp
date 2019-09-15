#include<stdio.h>
int swap(int,int);
int main()
{
	int a=10; int b=20;
	printf("before swapping the value of a = %d, b= %d\n",a,b);
	swap(a,b);//call by value
	printf("after swapping the value of a = %d, b= %d",a,b);	/*value change nhi hogi ye actual parameter hai 
																formal parameter ki value change hone se inko fark nhi pdta*/
}
int swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swapping the value of a = %d, b= %d\n",a,b);	/*  ye foermal parameter h yha value change ki h a & b ki but isse actual parameter
																me koi fark nhi pdega*/
}
