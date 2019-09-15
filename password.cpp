#include<stdio.h>
#include<string.h>

int main()
{ int n=0;
//printf("enter the length\n");
//scanf("%d",&n);
char password[1000];
printf("enter password\n");
gets(password);
int v=0;
while(password[v]!='\0')
{
	v++;
	n++;
}
int a=0,b=0,c=0,d=0,e=0;

    for(int i=0;i<n;i++)
    {
        if(password[i]>=48 &&password[i]<=57)
        a++;
        else if(password[i]>=97 &&password[i]<=122)
        b++;
        else if(password[i]>=65&&password[i]<=90)
        c++;
        else //if(password[i]=='@'||password[i]=='^'||(password[i]>=33&&password[i]<=45))
        d++;
		}
        if(n==0)
        printf ("6");//return 6;
        if(n==1)
        printf ("5");//return 5;
        if(n==2)
       printf ("4");// return 4;
        if(n==3)
        printf ("3");//return 3;
         if(a==0)
        e++;
        if(b==0)
        e++;
        if(c==0)
        e++;
        if(d==0)
         e++;
         if(n>=6&& e>0)
         printf ("%d",e);//return e;
         else if(n<6 && (n+e)>=6)
         printf ("%d",e);//return e;
        int z=n+e;
        if(z<6)
       {
		 z=6-z+e;
       printf ("%d",z);// return z;
}

return 0;}
