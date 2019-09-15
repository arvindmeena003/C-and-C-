#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int main()
{
	struct arvind{
		int data;
		struct arvind *next;//ptr hai jo address contain krega next data ka
	};
	struct arvind *start=NULL; // ye start k liye bnaya h yhi se hm start krenge
	struct arvind *new_node, *ptr;//ek or data type bnaya arvind type ka jisme hum hmesha number dalenge
	printf("enter the number and enter -1 to stop at the end\n");
	int num;
	printf("enter the num\n");
	scanf("%d",&num);
	while(num!=-1)
	{
		new_node=(struct arvind*)malloc(sizeof(struct arvind));//nye vale node ko memory dynamically dilvaai
		new_node->data=num;// new node k data vale part me num dala
		if(start==NULL)// start ko hmne phle hi null daal rkha h so ab hmko start me new node ko dalna pdega taki agla data fir se new node me le sake
		{
			new_node->next=NULL;//new node k next vala part jisme agle vale ka address hota h usko khali kiya taki aage vale ka address nhi rkhe
			start=new_node;// yha hmne start vale me new node vale ka data dala
		}// agle vale iteration me start khali nhi hoga so else vale part me jaega
	else
	{
		ptr=start; // ab yha hmne jo ek ptr or bnaya tha new node k sath usme start ko dalenge or aage check krte jaenge 
		while(ptr->next!=NULL)// check kr rhe h ki start vala jo ptr me dala h uske next vale me khali h ya nhi(aage vale ka addres h ya nhi)
		ptr=ptr->next;//agr khali nhi h to ptr me aage vale ka adress dalte jaenge
		ptr->next=new_node;// ab yha ptr k next vale part me jha khali aaega usme newnode ko dal denge and agli line me new node k next vale me NULL daal denge taki ye aakhri node ho
		new_node->next=NULL;// yha next vale me null dal diya ab loop fir se chalega jab tak -1 nhi aa jata and fir se new node ko memory milegi;
	}
	printf("enter the data\n");
	scanf("%d",&num);
	
	}
	struct arvind *ptr1;// ek or ptr create kiya taki hm start ko isme daal sake or print krva sake
 	ptr1=start;//yha start ko is ptr me daal diya
	while(ptr1!=NULL)//tab tak chalega jab tak ptr k next vale me null nhi aa jata
	{
		printf("%d  ",ptr1->data);//data print krvaya
		ptr1=ptr1->next;// yha ptr me next vale ka adrees aaega jo aage vale ko point krega 
	}
	printf("\n");
printf("want to enter number at the beggining if yes then enter -1  otherwise 0\n");
int b;

scanf("%d",&b);
//printf("enter the num\n");
while(b==-1)
{ int num2;
	struct arvind *new_node1;
	new_node1=(struct arvind*)malloc(sizeof(struct arvind));
printf("enter the num\n");
	scanf("%d",&num2);
	new_node1->data=num2;
	new_node1->next=start;
	start=new_node1;
	printf("want to enter number at the beggining if yes then enter -1 otherwise 0\n");
scanf("%d",&b);
}
struct arvind *ptr3;// ek or ptr create kiya taki hm start ko isme daal sake or print krva sake
 	ptr3=start;//yha start ko is ptr me daal diya
	while(ptr3!=NULL)//tab tak chalega jab tak ptr k next vale me null nhi aa jata
	{
		printf("%d  ",ptr3->data);//data print krvaya
		ptr3=ptr3->next;// yha ptr me next vale ka adrees aaega jo aage vale ko point krega 
	}

	printf("\n");
printf("want to enter number at the end if yes then enter -1 otherwise 0\n");
int c;

scanf("%d",&c);
//printf("enter the num\n");
while(c==-1)
{ int num3;
	struct arvind *new_node2,*ptr4;
	new_node2=(struct arvind*)malloc(sizeof(struct arvind));
printf("enter the num\n");
	scanf("%d",&num3);
	new_node2->data=num3;
	new_node2->next=NULL;
	ptr4=start;
	while(ptr4->next!=NULL)
	{
	ptr4=ptr4->next;}
	ptr4->next=new_node2;
	printf("want to enter number at the end if yes then enter -1 otherwise 0\n");
scanf("%d",&c);
}
struct arvind *ptr5;// ek or ptr create kiya taki hm start ko isme daal sake or print krva sake
 	ptr5=start;//yha start ko is ptr me daal diya
	while(ptr5!=NULL)//tab tak chalega jab tak ptr k next vale me null nhi aa jata
	{
		printf("%d  ",ptr5->data);//data print krvaya
		ptr5=ptr5->next;// yha ptr me next vale ka adrees aaega jo aage vale ko point krega 
	}
		
return 0;
}
