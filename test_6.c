//Implementing queue using 1-array , 2-linked list
//queue-fifo-first in first out

#include<stdio.h>

void enqueue();		//addition of element to queue
int dequeue();		//deletion of element to queue
int peep();		//topmost element value
void display();

int is_full();
int is_empty();

int a[10];
int front=-1;
int rear=-1;

void main()
{
	int ch;
	while(1)
	{
		printf("1-enqueue\n2-dequeue\n3-peep\n4-display\n5-exit\n");
		printf("Enter the choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enqueue();	break;
			case 2:dequeue();	break;
			case 3:peep();		break;
			case 4:display();		break;
			case 5:return;		break;
			default: printf("Wrong choice");
		}
	}
}

void enqueue()
{
	int b;
	if(is_full())
		printf("queue overflow\n");
	else if(front==-1 && rear==-1)
		front=rear=0;
	else
	{
		printf("Enter the value:");
		scanf("%d",&b);
		rear++;
		a[rear]=b;
	}
}

int dequeue()
{
	int b;
	if(is_empty())
		printf("List is empty");
	else 
	{
		front++;
		if(front>rear)
			front=rear=-1;
	}	
}	
		
int peep()
{
	if(is_empty())
		printf("queue is empty");
	else
	{
		printf("topmost elemrnt is",a[front]);
	}
}

void display()
{
	if(is_empty())
		printf("stack is underflow/empty\n");
	else
	{
		for(int i=0;i<rear;i++)
			printf("%d",a[i]);
	}
}

int is_full()
{
	if(rear>9)
		return 1;
	else
		return 0;
}
int is_empty()
{
	if(rear<0)
		return 1;
	else
		return 0;
}