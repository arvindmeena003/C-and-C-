#include <stdio.h>

int main()
{
    long long int  i, j, n;

    /* Input number of rows from user */
    printf("Enter value of n: ");
    scanf("%lld", &n);

    for(i =1; i<=n; i++)
    {
        /* Print i number of stars */
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
for(int k=n-i;k>0;k--)
printf("#");
        /* Move to next line */
        printf("\n");
    }

    return 0;
}
