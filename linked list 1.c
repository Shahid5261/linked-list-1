//cse-19-43 
//program to display only even numbers

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
 struct node*head=NULL;
int create()
{
	int n,i;
	printf("enter the number of nodes:");
	scanf("%d",&n);
	printf("\n");
	struct node *temp,*tail;
	for(i=0;i<n;i++)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter data %d :",i+1);
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;	
		}
		else
		{
			tail->next=temp;
			tail=temp;
		}
	
	}
	temp->next=NULL;
}
void view(struct node *p)
{
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}
	printf("\n\n");
	
}
void evennum(struct node *p)
{
	printf("\n even numbers in the list are :");
	while(p!=NULL)
	{
		if(p->data%2==0)
		{
			printf("%d",p->data);
			
		}
		p=p->next;
	}
}
int main()
{
	create();
	view(head);
	evennum(head);
	printf("\n");
}
