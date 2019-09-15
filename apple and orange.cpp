#include<stdio.h>
int main()
{
	int s,t,a,b,n,m,count1=0,count2=0;
	scanf("%d %d",&s,&t);
	scanf("%d %d",&a,&b);
	scanf("%d %d",&n,&m);
	int arr1[n];
	int arr2[m];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
		}	
	for(int i=0;i<m;i++)
	{
		scanf("%d",&arr2[i]);
		}	
		for(int i=0;i<n;i++)
	{
		int  z=a+arr1[i];
		if(z>=s && z<=b)
		{
		count1++;
		}
	}
		for(int i=0;i<m;i++)
	{
		int  y=b+arr2[i];
		if(y>=s && y<=b)
		{
		count2++;
		
		}
		}
		printf("%d %d",count1,count2);

return 0;
}
