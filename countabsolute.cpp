 #include <stdio.h>
    int main()
    {
 
        int i, j, a, n, number[30];
        //printf("Enter the value of N \n");
        scanf("%d", &n);
 
        //printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
      /*  printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);*/
            int count1=0,count2=0;
 for(int k=0;k<n;k++)
 {
 	for(int l=k+1;l<n;l++)
 	{
 		if((number[l]-number[k])<=1)
 		count1++;
	 }
	 if(count1>count2)
	 count2=count1;
	 count1=0;
 }
 printf("%d",count2+1);
    return 0;
	}
