#include<stdio.h>
int *fun(int arr[],int n);
int main()
{
int n;
scanf("%d",&n);
	int arr[n];
	for(int j=0;j<n;j++)
	{
		scanf("%d",&arr[j]);
	}
int* ptr = fun(arr,n);
for(int j=0;j<n;j++)
	{
		printf("%d",ptr[j]);
		printf("\n");
	}
}
 int* fun(int *arr,int n) {
 

	for(int i=0;i<n;i++)
{
	if(arr[i]>=38)
	{
		if((arr[i]-3)%5==0)
		arr[i]+=2;
	else
		if((arr[i]-4)%5==0)
		arr[i]+=1;
	
}
}
return arr;
}
