#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100];
	int n,i,sum=0;
	printf("enter the number of elements of array\n");
	scanf("%d",&n);
printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	 } 
	 printf("the list of elements are|\n");
	
	 for(i=0;i<n;i++)
	 {
	 printf("arr[%d]=%d\n",i,arr[i]);	 	
	 }
	 for(i=0;i<n;i++)
	 
	 {
	 sum=sum+arr[i];
}
printf("the sum of array elements are=%d",sum);
getch();
return 0;
}
