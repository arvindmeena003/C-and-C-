#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	int min=arr[0];
	int count1=0;
	int count2=0;
	for(int j=0;j<n;j++)
	{
		if(min>arr[j])
		{ min=arr[j];
			count2++;
		}
		if(max<arr[j])
		{max=arr[j];
		count1++;
		
		}
	}
	int akm[]={count1,count2};
	printf("%d %d",akm[0],akm[1]);
	return 0;
}
