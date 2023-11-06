//Implementing Stack(LIFO)-using 1-array
//array using linked list is same- add_beg()->del_beg() or vise versa

#include<stdio.h>

void push();
int pop();
int peek();
void display();
int is_empty();
int is_full();

int a[10];
int top=-1;

void main()
{
	int ch;
	while(1)
	{
		printf("1-push\n2-pop\n3-peek\n4-display\n5-exit\n");
		printf("Enter the choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push(); break;
			case 2:pop(); break;
			case 3:peek(); break;
			case 4:display(); break;
			case 5:return; break;
			default:printf("Wrong choice");
		}
	}
}

void push()
{
	int b;
	if(is_full())
		printf("stack is full\n");
	else
	{
		printf("Enter the element");
		scanf("%d",&b);
		top++;
		a[top]=b;
	}
}

int pop()
{
	int b;
	if(is_empty())
		printf("stack is empty\n");
	else
	{
		b=a[top];	//to get top element of array in b and nothing else.
		top--;
		printf("Removed element is %d\n",b);
	}
}
int peek()
{
	int b;
	if(is_empty())
		printf("stack is empty\n");
	else
	{
		b=a[top];
		printf("Top element is %d\n",b);
	}
}

int is_full()
{
	if(top>9)
		return 1;
	else
		return 0;
}

int is_empty()
{
	if(top<0)
		return 1;
	else
		return 0;
}

void display()
{
	if(top==-1)
		printf("stack is empty\n");
	else
	{
		for(int i=0;i<=top;i++)
		{
			printf("%d\n",a[i]);
		}
	}
}