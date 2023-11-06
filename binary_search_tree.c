//status-Wrong 
/*#include<stdio.h>
#include<stdlib.h>
struct bin
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root=NULL;

struct node *getnode()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter the element");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
}

void insert(struct node *new)
{
    struct node *p,*n;
    n=root;
    if(root==NULL)
        root=new;
    else
    {
        n=root;
        p=n;
        while(n!=NULL)
        {
            if(n->data>new>data)
            {
                p=n;
                n=n->left;
            }
            else
            {
                p=n;
                n=n->right;
            
            }
        }
        if(p->data>new->data)
            p->left=new;
        else
            p->right=new;
    }
}

void preorder(struct node *ptr)
{
    if(ptr!=NULL)
    {
        printf("%d",ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}

void postorder(struct node *ptr)
{
    if(ptr!=NULL)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        printf("%d",ptr->data);
    }
}

void inorder(struct node *ptr)
{
    if(ptr!=NULL)
    {
        inorder(ptr->left);
        printf("%d",ptr->data);
        inorder(ptr->right);
    }
}

void main()
{
    int ch;
    struct node *new;
    while(1)
    {
        printf("1-Insert\n2-Preorder\n3-Postorder\n4-Inorder\n5-Exit\n");
        printf("Enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:new=getnode();
                insert(new);
                break;
            case 2:preorder(root); break;
            case 3:postorder(root); break;
            case 4:inorder(root); break;
            default :return;
        }
    }
}*/



/*#include<stdio.h>
#include<stdlib.h>

void insert();
void inorder();
void preorder();
void postorder();

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root=NULL;

void main()
{
    int ch;
    while(1)
    {
        printf("1-Insert\n2-Inorder\n3-preorder\n4-postorder\n5-Exit\n");
        printf("Enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert(); break;
            case 2:inorder(); break;
            case 3:preorder(); break;
            case 4:postorder(); break;
            case 5:return 0;
            default:printf("Wrong Choice");
        }
    }
}

void insert()
{
    struct node *new_node,*p,*n;
    new_node=(struct node *)malloc(sizeof(struct node));
    printf("enter the element");
    scanf("%d",&new_node->data);
    new_node->left=NULL;
    new_node->right=NULL;
    if(root==NULL)
        root=new_node;
    else
    {
        n=root;
        p=n;
        while(n!=NULL)
        {
            if(new_node->data < n->data)
            {
                p=n;
                n=n->left;
            }
            else
            {
                p=n;
                n=n->right;
            }
            
        }
        if(new_node->data <n->data)
            p->left=new_node;
        else
            p->right=new_node;
    }
}*/


#include<stdio.h>
#include<stdlib.h>

void insert_node();
void display();

struct node
{
    int data;
    struct node *next;
    struct node *prev;
} ;
struct node *root=NULL;

void main()
{
    int ch;
    while(1)
    {
        printf("1-insert_node\n2-display\n3-exit");
        printf("enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert_node();  break;
            case 2:display();  break;
            case 3:return; break;
            default: printf("Wrong Choice");

        }
    }
}

void insert_node()
{
    struct node *new_node,*p,*n;
    new_node=(struct node *)malloc(sizeof(struct node));
    printf("ENter the elements");
    scanf("%d",&new_node->data);
    new_node->next=NULL:
    new_node->prev=NULL;

    if(root==NULL)
        root=new_node;
    else if(new_node->data<root->data)
    {
        n=root;
        p=n;
        while(n!=NULL)
        {
            n=n->prev;
        }
        p->prev=new_node;
        
    }
}


