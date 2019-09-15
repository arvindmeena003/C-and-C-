#include<stdio.h>
int main()
{
int a_count;
int b_count;
scanf("%d",&a_count);
scanf("%d",&b_count);
int a[a_count];
int b[b_count];
for(int f=0;f<a_count;f++)
{
	scanf("%d",&a[f]);
}
for(int s=0;s<b_count;s++)
{
	scanf("%d",&b[s]);
}
int min=a[0];int max=b[0];
for(int i=0;i<a_count;i++)
{
if(a[i]>min)
min=a[i];
}
for(int j=0;j<b_count;j++)
{
if(b[j]<max)
max=b[j];
}
//printf("\nmax=%d\n",max);
//printf("min=%d\n",min);
int n=max-min+1;
//printf("n=%d\n",n);
int temp[200];
int r=0;
for(int h=min;h<=max;h++)
{
	temp[r]=h;
	r++;
}
int g=0;
int count3=0;
int count4=0;
for(int k=0;k<n;k++)
{
    for(int m=0;m<a_count;m++)
    {int as=a[m];
        if(temp[k]%a[m]!=0)
        count3=1;
    }
    
for(int v=0;v<b_count;v++)
{
	//int ap=b[v];
	if(b[v]%temp[k]!=0)
	count4=1;
}
    if(count3==0 && count4==0)
   { 
   g++;
   }

   count3=0;
   count4=0;
}
printf("%d",g);
return 0;
}
