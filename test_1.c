//Linked List program - singly linked list
#include<stdio.h>
#include<stdlib.h>

void add_beg();
void add_last();
void del_beg();
void del_last();
void display();

struct node
{
	int data;
	struct node *next;
};

struct node *head=NULL;

void main()
{
	int ch;
	while(1)
	{
		printf("1-add_beg\n2-add_last\n3-del_beg\n4-del_last\n5-display\n6-exit\n");
		printf("Enter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:add_beg();	break;
			case 2:add_last();	break;
			case 3:del_beg();	break;
			case 4:del_last();	break;
			case 5:display();		break;
			case 6:return;		break;
			default :printf("Wrong choice");
		}
	}
}

void add_beg()
{
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data :");
	scanf("%d",&p->data);
	p->next=head;
	head=p;
	printf("Successfully added the node");
}
void add_last()
{ 
	struct node *p,*q;
	p=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element to add at last:");
	scanf("%d",&p->data);
	
	if(head==NULL)
	{
		p->next=NULL;
		head=p;
		printf("Node added successfully");
	}
	else
	{
		q=head;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
		p->next=NULL;
		printf("Node added successfully at last");
	}
	
}
		
void del_beg()
{ 
	struct node *p;
	if(head==NULL)
		printf("Linked list is empty");
	else
	{
		p=head;
		head=head->next;
		free(p);
	}
} 

void del_last()
{
	struct node *temp,*q;
	if(head==NULL)
		printf("Linked list is empty:\n");
	else
	{
		temp=head;
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		q=temp->next;
		temp->next=NULL;
		free(q);
	}
}

void display()
{	
	struct node *temp;
	if(head==NULL)
	{
		printf("No Element in linked list");
	}
	else
	{
		temp=head;
		while(temp!=NULL) 
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
}
			
	