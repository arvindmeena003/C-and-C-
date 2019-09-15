#include<stdio.h>
int main()
{
	 char ch='A';
	 for(int i=0;i<6;i++)
	 {
	 	for(int j=6;j>i;j--)
	 	printf(" ");
	 	for(int k=0; k<=i;k++)
		 printf("%c",ch++);
		  ch--;
	 	for(int m=0;m<=i;m++)
	 	printf("%c",ch--);
	 	ch='A';
	 	printf("\n");
	 }
	 return 0;
}
