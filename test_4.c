//linked list-circular doubly linked list
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
	struct node *prev;
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
			deafult: printf("wrong choice");
		}
	}
}

void add_beg()
{
	struct node *p,*t;
	p=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element");
	scanf("%d",&p->data);
	
	if(head==NULL)
	{
		head=p;
		p->next=head;
		head->next=p;
		p->prev=NULL;
		printf("Node added successfully");
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
		head->prev=p;
		printf("Node added successfully");
	}
}

void add_last()
{
	struct node *p,*t;
	p=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element");
	scanf("%d",&p->data);
	
	t=head;
	while(t->next!=head)
		t=t->next;
	t->next=p;
	p->next=head;
	p->prev=t;
	head->prev=p;
	printf("Node added successfully");
}

void del_beg()
{
	struct node *p,*t;
	if(head==NULL)
	{
		printf("List is empty");
	}
	else
	{
		p=head;
		head=p->next;
		head->prev=NULL;
		free(p);
		t=head;
		printf("node deleted successfull");
	}
} 
	
void del_last()
{
	struct node*t,*q;
	
	if(head==NULL)
	{
		printf("list is empty");
	}
	else
	{
		t=head;
		while(t->next->next!=head)
		{
			t=t->next;
		}
		q=t->next;
		t->next=head;
		head->next=t;
		q->prev=NULL;
		free(q);
	}
}

void display()
{
	struct node *temp;
	if(head==NULL)
			printf("list is empty\n");
	else
	{
		temp=head;
		while(temp->next!=head)
		{
			printf("%d-->",temp->data);
			temp=temp->next;
		}
	}
}
			
			
			
			
			
			
			
			
			
			
			
	