// insertion of element in linked list at head and at end then display
#include<stdlib.h>
#include<stdio.h>

void add_beg();
void add_last();
void display();

struct node
{
    int data;
    struct node *next;
};
struct node *head;
void main()
{
    int ch;
    while(1)
    {
        printf("1-To add_beg\n2-To add_last\n3-display\n");
        printf("enter the choice");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: add_beg();
            break;

            case 2: add_last();
            break;

            case 3: display();
            break;

            case 4: return;

            default: printf("wrong choice");
        }
    } 
}
void add_beg()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    printf("enter the element");
    scanf("%d",&p->data);
    p->next=head;
    head=p;
    printf("node added successully\n");
}
void add_last()
{
    struct node *q,*p;
    p=(struct node *)malloc(sizeof(struct node));
    printf("enter the elements");
    scanf("%d",&p->data);
    if(head==NULL)
    {
        p->next=NULL;
        head=p;
    }
    else
    {
        q=head;
        while(q->next!=NULL)
        {
            q=q->next;
            
        }
        q->next=p;
        p->next=NULL;
        printf("\n inserted successfully");
    }
}
void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("list is empty");
    }
        temp=head;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    
}
