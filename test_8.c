//queue using linked list-fifo principle

#include<stdio.h>
#include<stdlib.h>

void add_beg();
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
		printf("1-add_beg\n2-del_last\n3-display\n4-exit\n");
		printf("Enter the choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:add_beg();	break;
			case 2:del_last();	break;
			case 3:display();		break;
			case 4:return;		break;
			deafult:printf("Wrong choice");
		}
	}
}

void add_beg()
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	printf("Enter the element");
	scanf("%d",&p->data);
	
	p->next=head;
	head=p;
	printf("Node added successfully");
}

void del_last()
{
	struct node *t,*q;
	if(head==NULL)
		printf("NO element in list");
	else
	{
		t=head;
		while(t->next->next!=NULL)
		{
			t=t->next;
		}
		q=t->next;
		t->next=NULL;
		free(q);
	}
}

void display()
{
	struct node *temp;
	if(head==NULL)
		printf("List is empty");
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("%d-->",temp->data);
			temp=temp->next;
		}
	}
} 
		