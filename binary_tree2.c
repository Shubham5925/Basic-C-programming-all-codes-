//Simple binary tree implementation ,afterward program in next binary_tree3.c

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

void main()
{
	struct node *p,*q;
	p=(struct node*)malloc(sizeof(struct node));
	q=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element of p:");
	scanf("%d",&p->data);
	printf("Enter the element of q:");
	scanf("%d",&q->data);
	p->left=q;
	p->right=NULL;
	printf("%d",p->data);
	q->left=NULL;
	q->right=NULL;
	printf("%d",q->data);
	printf("%d",p->left->data);
}
	