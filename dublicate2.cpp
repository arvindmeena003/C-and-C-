#include <stdio.h>
 
int main()
{
  int n, a[100], b[100], count = 0, c, d;
   scanf("%d", &n);
   for (c = 0; c < n; c++)
    scanf("%d", &a[c]);
 
  for (c = 0; c < n; c++)
  {
    for (d = 0; d < count; d++)
    {
      if(a[c] == b[d])
        break;
    }
    if (d == count)
    {
      b[count] = a[c];
      count++;
    }
  }
 
 int sum=0;
 int count1=0;
 for(int k=0;k<count;k++)
 {
 	for(int h=0;h<n;h++)
 	{
 		if(b[k]==a[h])
 		{
 			count1++;
		 }
	 }
	 sum+=(count1/2);
	 count1=0;
 }
 printf("%d",sum);
  return 0;
}
