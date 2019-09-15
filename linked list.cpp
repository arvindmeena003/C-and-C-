#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
	struct node{
		int num;
		struct node *ptr;
		
	};
	
	typedef struct node Node;
	Node *temp;
	Node *head;
	Node *last;
	int choice=1;
	int count =0;
	last=0;
	while(choice==1)
	{
		temp=(Node*)malloc(sizeof(Node));
		printf("enter the data\n");
		scanf("%d",&temp->num);
		
		if (last==0)
		{
			head=last=temp;
		}
		else{
			last->ptr=temp;
			last=temp;
		}
		printf("if you want to enter more element then press 1 otherwise enter 0\n");
		scanf("%d",&choice);
		
	}
	
	last->ptr=0;
	temp=head;
	printf("the link list is\n");
	while(temp!=0)
	{
		printf("%d =>",temp->num);
		count++;
		temp=temp->ptr;
	}
	
	printf("\n");
	printf("the number of node is = %d",count);
	//insertion in the beggining
	return 0;
	}
