#include<stdio.h>
int main()
{
int a_count;
scanf("%d",&a_count);
int a[a_count];
for(int k=0;k<a_count;k++)
scanf("%d",&a[k]);

int temp[100];
int count=0;
int count1=0;
for(int i=0;i<a_count;i++)
{
    for(int j=i;j<a_count;j++)
    { if(i!=j)
        if((a[i]-a[j])>=-1 &&(a[j]-a[i])<=1)
        {
        count++;
        }
    
    }
    if(count>=1)
    {
	temp[i]=a[i];
count1++;
}
	count=0;
}
int count2=0,count3=0;
for(int i=0;i<count1;i++)
{
    for(int j=i;j<count1;j++)
    { if(i!=j)
        if((temp[i]-temp[j])>=-1 &&(temp[j]-temp[i])<=1)
        {
        count2++;
        }
    
    }
    if(count2>=1)
    count3++;
    count2=0;
}
printf("c=%d",count3);
return 0;
}
