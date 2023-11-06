//binary tree implementation-final
//status-but only one time height=2

#include<stdio.h>
#include<stdlib.h>

struct node *create();
struct node 
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *root=NULL;

void main()
{
	struct node *p,*q;
	root=create();
	p=root;
	n=root->left;
	root->left=create();
	root->right=create();
	
	root->left->left=create();
	root->left->right=create();
	
	root->right->left=create();
	root->right->right=create();
	
	printf("root node set with data :  %d\t %d\t %d\t \n",root->left->data,root->data,root->right->data);
	printf("next node data %d %d %d %d",root->left->left->data,root->left->right->data,root->right->left->data,root->right->right->data);
}


struct node *create()
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data");
	scanf("%d",&p->data);
	p->right=NULL;
	p->left=NULL;
	return p;
}





























/*void main()
{
	int ch;
	while(1)
	{
		printf("1-insert\n2-display\n3-exit\n");
		print("Enter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();	break;
			case 2:display();	break;
			case 3:return; break;
			default:printf("Wrong choice:");
		}
	}
}*/