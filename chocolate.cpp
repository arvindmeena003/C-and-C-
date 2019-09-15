#include<stdio.h>
int main()
{ int s_count;
scanf("%d",&s_count);
int s[100];
for(int h=0;h<s_count;h++)
{
	scanf("%d",&s[h]);
}
int d,m;
scanf("%d",&d);
scanf("%d",&m);
int count1=0;
int count2=0;
long long sum=0;
int k;
while(s[k]!='\0')
{
    count2++;
    k++;
}
for(int i=0;i<s_count;i++)
{ if(count2<=(i+m))
   { for(int j=i;j<(i+s);j++)
    {
sum+=s[j];
    }
    if(sum==d)
    {
        count1++;
    }

}
sum=0;
}
return count1;
}

