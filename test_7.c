//queue implementation-circular queue
#include<stdio.h>
#include<stdlib.h>

void enqueue();
int dequeue();
int peek();
void display();

int a[10];
int front=-1;
int rear=-1;

void main()
{
	int ch;
	while(1)
	{
		printf("1-enqueue\n2-dequeue\n3-peek\n4-display\n5-exit\n");
		printf("Enter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enqueue(); break;
			case 2:dequeue(); break;
			case 3:peek(); break;
			case 4:display(); break;
			case 5:return;	break;
			default:printf("Wrong choice");
		}
	}
}
void enqueue()
{
	int num;
	printf("Enter the value you want to insert");
	scanf("%d",&num);
	if(front==0 && rear>9)
		printf("overflow");
	else if(front==-1 && rear==-1)
	{
		front=rear=0;
		a[rear]=num;
	}
	else if(rear==9 && front!=0)
	{
		rear=0;
		a[rear]=num;
	}
	else
	{
		rear++;
		a[rear]=num;
	}
}

int dequeue()
{
	if(front==-1 && rear==-1)
		printf("No elements are present");
	else if(front==rear)
		front=rear=-1;
	else
	{
		if(front==9)
			front=0;
		else
			front++;
	}
}

int peek()
{
	if(front==-1 && rear==-1)
		printf("Underflow");
	else
	{
		printf("Top element is -%d",a[rear]);
	}
}

void display()
{
	if(front==-1 && rear==-1)
		printf("Underflow");
	else
	{
		for(int i=0;i<=9;i++)
			printf("%d-->",a[i]);
	}
	printf("\n");
} 
	