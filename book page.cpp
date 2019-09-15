#include<stdio.h>
int main(){
	int n;
	int p;
scanf("%d",&n);
scanf("%d",&p);

 int first=1;
    int last =n;
int s=p;
int r=n-p;
if(s==0)
return 0;
else if(r==0)
return 0;
if(s>r)
{if((r/2)<1&&r==1){
if(n%2==0)
return 1;
else
return 0;}else
    printf("%d",r/2) ;
}
else if((s/2)<1&&s==1)
return 1;
else
printf("%d",s/2) ;

}

