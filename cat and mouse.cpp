#include<stdio.h>
int main()
{

int s,t,n;
int x,y,z;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&z);
//if(x==y && y==z)
//printf("Mouse C");//return "Mouse C";
if(z>x&&z>y)
{ s=z-x;
t=z-y; 
}
else if(z>x && z<y)
{
    s=z-x;
    t=y-z;
}
else if(z>y&&z<x)
{
    s=x-z;
    t=z-y;
}
else if(z<x&&z<y){
    s=x-z;
    t=y-z;
}

 if(s==t)
printf("Mouse C");//return "Mouse C";
else if(s>t)
printf("Cat B");//return "Cat B";
else
printf("Cat A");//return "Cat A";
}
return 0;
}

