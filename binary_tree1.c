//binary tree implementation 
#include<stdio.h>
#include<stdlib.h>

void insert();
void delete();
void display();

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *root;

void main()
{
	int ch;
	
	//default set but root value we give
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element value:");
	scanf("%d",&p->data);
	root=p;
	root->left=NULL;
	root->right=NULL;
	
	while(1)
	{
		printf("1-insert\n2-delete\n3-display\n4-exit\n");
		printf("enter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();	break;
			case 2:delete();	break;
			case 3:display();	break;
			case 4:return;	break;
			default:printf("Wrong choice:");
		}
	}
	
}

void insert()
{
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&p->data);
	p->left=NULL;
	p->right=NULL;
	
	if(p->data<root->data)
	{
		root->left=p;
	}
	else if(p->data>root->data)
	{
		root->right=p;
	}
}

void delete()
{
	struct node *q;
	q=root;
	free(q);
	printf("Root node deleted and tree gets unlinked");
}
void display()
{
	printf("%d",root->left->data);
	printf("%d",root->data);
	printf("%d",root->right->data);
}
	

