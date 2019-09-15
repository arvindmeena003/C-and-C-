#include<stdio.h >

int main()
{
long long	int x; 
	int unit=0;
	int i=0;
	long  long int y;
	int result=0;
	int arr[30];
	
	arr[0]=1;
	printf("enter the value of x= ");
	scanf("%lld",&x);
	printf("\n");
	printf("enter the power of x=");
	scanf("%lld",&y);
	printf("\n");
	while(x>0)
	{
	int rem=x%10;
	x=x/10;
	arr[i]=rem;
	i++;	
	}
	
	if(arr[0]==0)
	printf("unit digit is = %d",arr[0]);
	else if(arr[0]==1)
	printf("unit digit is = %d",arr[0]);
	else if(arr[0]==5)
	printf("unit digit is = %d",arr[0]);
	else if(arr[0]==6)
	printf("unit digit is = %d",arr[0]);
	else if(y%4==0){
	
	result=arr[0]*arr[0]*arr[0]*arr[0];
	 unit=result%10;
	printf("the unit digit is = %d ", unit);
}
	else if(y%4==3)
	{
	
	result=arr[0]*arr[0]*arr[0];
	 unit=result%10;
	printf("the unit digit is = %d ", unit);
	}
	else if(y%4==2)
	{
	
	result=arr[0]*arr[0];
	 unit=result%10;
	printf("the unit digit is = %d ", unit);
	}
	else printf("unit digit is=%d",arr[0]);
	

return 0;
}
