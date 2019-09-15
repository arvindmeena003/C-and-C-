#include<stdio.h>
#include<string.h>
int main()
{int n; 

	char str[1000];
	gets(str);
	int j=0;
	int h=strlen(str);
	int flag=0;
	while(flag==0)
	{
	flag=1;
	for(int i=0;i<h;i++)
	{
		if(str[i]==str[i+1])
		{flag=0;
		j=0; 
			while(j<2)
			{
				for(int k=i;k<h;k++)
				str[k]=str[k+1];
			j++;
			h--;
			
		//	printf("%s\n",str);}
			
			
		}
		
	
}

}
}
//printf("----\n");
//	puts(str);
	if (h==0)
	printf("Empty String");
	else
for(int i=0;i<h;i++)
{
	printf("%c",str[i]);
}
return 0;
}
