#include<stdio.h>
int main()

{ int b,keyboards_count,drives_count;
scanf("%d",&b);
scanf("%d",&keyboards_count);
scanf("%d",&drives_count);
int keyboards[100];
int drives[100];
for(int i=0;i<keyboards_count;i++)
{
	scanf("%d",&keyboards[i]);
}
for(int i=0;i<drives_count;i++)
{
	scanf("%d",&drives[i]);
}
int s=0,temp;
    for(int i=0;i<keyboards_count;i++)
    {
        for(int j=i+1;j<keyboards_count;j++)
        {
            if(keyboards[i]<keyboards[j])
            temp=keyboards[i];
            keyboards[i]=keyboards[j];
            keyboards[j]=temp;
        }
    }
    int n=drives_count;
    for(int k=0;k<n;k++)
    {
        for(int i=k;i<n;i++)
        {
            if(drives[k]<drives[i])
            {
                temp=drives[k];
                drives[k]=drives[i];
                drives[i]=temp;
            }
        }
    }
    
    for(int i=0;i<keyboards_count;i++)
    {
        for(int j=0;j<drives_count;j++)
        {
            if((keyboards[i]+drives[j])<=b)
           s=keyboards[i]+drives[j];
       printf("s=%d",s);
	    }
    }
    if(s==0)
    return -1;
    
return 0;
}
