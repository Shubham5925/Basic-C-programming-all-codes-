/*#include<stdio.h>
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
			case 5:display();		break;
			case 6:return;		break;
			default: printf("Wrong choice");	
		}
	}
}

void add_beg()
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data");
	scanf("%d",&p->data);
	p->next=head;
	p->prev=NULL;
	head=p;
	printf("Node added successfully");
}

void add_last()
{
	struct node *p,*q;
	p=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element");
	scanf("%d",&p->data);
	if(head==NULL)
		printf("List is empty");
	else
	{
		q=head;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
		p->prev=q;
		p->next=NULL:
		printf("node added successfully");
	}
}

void del_beg()
{
	struct node *q;
	if(head==NULL)
		printf("List is empty");
	else
	{
		q=head;
		head=head->next;
		head->perv=NULL;
		q->next=NULL;
		free(q);
		printf("Node deleted successfully");
	} 
} 

void del_last()
{
		struct node *q,*t;
		if(head=NULL)
			printf("List is empty");
		else
		{
			q=head;
			while(q->next->next!=NULL)
			{
				q=q->next;
			}
			t=q->next;
			q->next=NULL;
			t->prev=NULL;
			free(t);
			printf("Node deleted successfully");
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
			printf("%d",temp->data);
			temp=temp->next;
		}
	} 
}
			
	
	
	
	
	
	
	
	
	
	
	
	
void del_beg()
{
	struct node *q;
	if(head==NULL)
		printf("No element linked");
	else
	{
		q=head;
		head=head->next;
		q->next=NULL;
		free(q);
	}
}

void del_last()
{
	struct node *p,*t;
	if(head==NULL)
		printf("No element present");
	else
	{
		p=head;
		while(p->next->next!=NULL)
		{
			p=p->next;
		}
		t=p->next;
		p->next=NULL;
		free(t);
		printf("Last node deleted successfully");
	}
}

void display()
{
	struct node *temp;
	if(head=NULL)
		printf("NO element present");
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
*/

//stack using array

#include<stdio.h>

void push();
void pop();
void peek();
int is_full();
int is_empty();

void display();

int a[10];
int top=-1;
void main()
{
	int ch;
	while(1)
	{
		printf("1-push\n2-pop\n3-peep\n4-display\n5-exit\n");
		printf("Enter the choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();	break;
			case 2:pop();	break;
			case 3:peep();	break;
			case 4:display();	break;
			case 4:return();	break;
			default:printf("Wrong choice");
		}
	}
}

void push()
{
	int b;
	if(is_full())
		printf("Stack is full");
	else
	{
		printf("Enter the elements");
		scanf("%d",&b);
		top++;
		a[top]=b;
	}
}

void pop()
{
	if(is_empty())
		printf("Stack is underflow");
	else
	{
		top--;
		printf("element removed");
	}
}
void peek()
{
	if(is_empty())
		printf("Stack is empty");
	else
	{
		printf("%d",a[top]);
	}
}
void is_full()
{
	if(top>9)
		return 1;
	else
		return 0;
}

void is_empty()
{
	if(top==-1)
		return 0;
	else
		return 1;
}


	
			
	