//Simple binary tree implementation ,afterward program in next binary_tree3.c

#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root=NULL;

//create new node with right & left to NULL

struct node *newnode(int item)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=item;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}


//Inorder traversal to see the elements

void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d-->",root->data);
		inorder(root->right);
	}
}

//utility function to insert a neewnode with given data in bst

struct node *insert(struct node *node,int data)
{
		if(node==NULL)
			return newnode(data);
		if(data<node->data)
			node->left=insert(node->left,data);
		else if(data>node->data)
			node->right=insert(node->right,data);
		return node;
}

int main()
{
	struct node *root=NULL;
	root=insert(root,50);
	insert(root,30);
	insert(root,20);
	insert(root,40);
	insert(root,70);
	insert(root,60);
	insert(root,80);
	
	//print inorder traversal of the bst;
	inorder(root);
	
	return 0;
}
