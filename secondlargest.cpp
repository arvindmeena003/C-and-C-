#include<stdio.h>
int main()
{
	int arr[10];int n;
	printf("enter the array size\n");
	scanf("%d",&n);
	printf("enter the vale of array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		
	int largest=arr[0];
	int seclargest=arr[1];
	for(int j=0;j<n;j++)
	{
		if(arr[j]>largest && arr[j]>seclargest)
		{
			largest=arr[i];
		}
		else if(arr[j]>seclargest && arr[j]!=seclargest)
		{
			seclargest=arr[j];
		}
	}
	printf("largest = %d\n secondlargest = %d",largest,seclargest)
}

