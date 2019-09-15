#include <stdio.h>
int main() 
{
    int a[10], number, i=0,temp;
    printf("\n Please Enter the Number You want to Convert  :  ");
    scanf("%d", &number);
    temp=0;
    for(i=0;number>0;i++)
    {
        a[i] = number % 2;
          number = number / 2;
    }
     for(i=i-1;i>=0;i--)
        printf(" %d ", a[i]);

    return 0;
}
