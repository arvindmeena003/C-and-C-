#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
	struct node {
		
		struct node *prev;
		struct node * next;
		int data;
	};
	struct node *start=NULL;
	printf("enter -1 at the end of list\n");
	printf("enter data\n");
	int num;
	scanf("%d",&num);
	struct node *node1;
	struct node *ptr;
	while(num!=-1){
		if(start==NULL)
		{
			node1=(struct node*)malloc(sizeof(struct node));
			node1->data=num;
			node1->next=NULL;
			node1->prev=NULL;
			start=node1;
		}
		else{
			node1=(struct node*)malloc(sizeof(struct node));
			node1->data=num;
			node1->next=NULL;
			ptr=start;
			
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=node1;
			node1->prev=ptr;
			
		}
		printf("enter the data\n");
			scanf("%d",&num);
	}
	struct node *ptr1;
	ptr1=start;
	while(ptr1!=NULL)
	{
		printf("%d   ",ptr1->data);
		ptr1=ptr1->next;
	}
return 0;
}
