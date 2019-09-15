#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,n,m,min;
	printf("enter the numers\n");
	scanf("%d\n%d",&n,&m);
	min=(n<m)?m:n;
	for(i=min;i>0;i++)
	{
		if(min%n==0 && min%m==0)
		{
		printf("LCM of %d and %d is = %d",n,m,min);
		break;
		}
		min++;
	}
	return 0;
}
