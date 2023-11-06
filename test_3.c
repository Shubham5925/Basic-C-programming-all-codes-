//linked list-circular linked list

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
		printf("Enter the choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:add_beg();	break;
			case 2:add_last();	break;
			case 3:del_beg();	break;
			case 4:del_last();	break;
			case 5:display();	break;
			case 6:return;		break;
		}
	}
}

void add_beg()
{
	struct node *p,*t;
	p=(struct node *)malloc(sizeof(struct node));
	printf("enter the element");
	scanf("%d",&p->data);
	if(head==NULL)
	{
		head=p;
		p->next=head;
		head->next=p;
		printf("Node added successfully\n");
	}
	else
	{
		t=head;
		while(t->next!=head)
		{
			t=t->next;
		}
		t->next=p;
		p->next=head;
		head=p;
		printf("Node added successfully\n");
	} 
}

void add_last()
{
	struct node *p,*q;
	p=(struct node *)malloc(sizeof(struct node));
	printf("Enter the elemnt");
	scanf("%d",&p->data);
	q=head;
	while(q->next!=head)
	{
		q=q->next;
	}
	q->next=p;
	p->next=head;
	printf("Node added successfully\n");
}	

void del_beg()
{
	struct node *p,*t;
	t=head;
	while(t->next!=head)
	{
		t=t->next;
	} 
	t->next=head->next;
	free(head);
	head=t->next;
	printf("Beg node deleted\n");
}
			
void del_last()
{
	if(head==NULL)
		printf("List is empty");
	else
	{
		struct node *q,*t;
		q=head;
		while(q->next->next!=head)
		{
			q=q->next;
		}
		t=q->next;
		q->next=head;
		t->next=NULL;
		free(t);
		printf("Node deleted successfully\n");
	}
}

void display()
{
	struct node *temp;
	if(head==NULL)
		printf("List is empty\n");
	else
	{
		temp=head;
		while(temp->next!=head)
		{
			printf("%d-->",temp->data);
			temp=temp->next;
		}
		printf("%d-->\n",temp->data);
	}
}    
	
			