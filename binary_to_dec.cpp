#include <stdio.h>
 
int main()
{
    long long  num, binary_val, decimal_val = 0, base = 1, rem;
 
    printf("Enter a binary number(1s and 0s) \n");
    scanf("%lld", &num); 
    binary_val = num;
    while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("The Binary number is = %lld \n", binary_val);
    printf("Its decimal equivalent is = %lld \n", decimal_val);
return 0;
}
