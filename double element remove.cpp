#include<stdio.h>
int main()
{
	int arr[10];
int brr[10];
	int n;
	int k=0;
	printf("enter the size of arr[]\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<=n;i++)
	{
	for(int j=1;j<n;j++)
	{
		if(arr[i]==arr[j])
		break;
		else
		brr[i]=arr[i];
		
	}
	
	
	}
	
	for(int i=0;i<n;i++)
	{
		printf("arr[%d]=%d\n",i,brr[i]);
	}
}
