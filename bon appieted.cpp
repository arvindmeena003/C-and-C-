#include<stdio.h>
int main()
{
	int n,b;
	scanf("%d",&n);
	int k;
	scanf("%d",&k);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);	
	}
	scanf("%d",&b);
	int sum=0;
	for(int j=0;j<n;j++)
	{
		sum+=arr[j];
	}
	if(b==(sum/2))
	{
		printf("%d",(arr[k]/2));
	}
else
printf("Bon Appetit");
return 0;
}
