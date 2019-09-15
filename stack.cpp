#include<stdio.h>

#define max 3
int main()
{ int n;
int top=-1;
	int stack[max];
	

	int choice=1;
	if(top==max-1)
	{
		printf("overflow\n");
		
	}
	while(choice==1)
	{
	
		printf("enter the element\n");
		scanf("%d",&n);
		top++;
		stack[top]=n;
		printf("want to add element if yes 1 if no then 0\n");
	scanf("%d",&choice);
	}
	int i;

	for(i=top;i>=0;i--)
	{
		printf("elemet [%d] = %d\n",i,stack[i]);
	}

  choice=1;
  printf("want to delete element if yes 1 if no then 0\n");
	scanf("%d",&choice);


	while(choice==1)
	{ 
		printf("the deleted element is=%d \n",stack[top]);
		top--;
		printf("want to delete element if yes 1 if no then 0\n");
	scanf("%d",&choice);
	}
	printf("after deletion the stack is\n");
	
	
	for(i=top;i>=0;i--)
	{
		printf("elemet [%d] = %d\n",i,stack[i]);
	}

return 0;}


