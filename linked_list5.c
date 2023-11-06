//add_beg,add_last,del_beg,del_last,display in a linked list
#include<stdio.h>
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
};
struct node *head=NULL;
void main()
{
    int ch;
    while(1)
    {
        printf("1-add_beg\n2-add_last\n3-del_beg\n4-del_last\n5-display\n6-exit\n");
        printf("enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: add_beg();
            break;

            case 2: add_last();
            break;

            case 3: del_beg();
            break;

            case 4: del_last();
            break;

            case 5: display();
            break;

            case 6: return;
            break;

            default: printf("wrong choice\n");

        }
    }
}

void add_beg()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node *));
    printf("enter the element");
    scanf("%d",&p->data);
    p->next=head;
    head=p;
    printf("node added successfully\n");
    
}
void add_last()
{
    struct node *p,*q;
    p=(struct node *)malloc(sizeof(struct node));
    printf("enter the elements");
    scanf("%d",&p->data);
    q=head;
    while(q->next!=NULL)
    {
        q=q->next;
    }
    q->next=p;
    p->next=NULL;
    
}
void del_beg()
{
   struct node *p;
    if(head==NULL)
    {
        printf("\n lsit is empty");
    }
    else
    {
        p=head;
        head=head->next;
        free(p);
    }
}
void del_last()
{
    if(head==NULL)
    {
        printf("\n list is empty");
    }
    /*else if(head->next=NULL)
    {
       struct node *p; 
       p=head;
       head=NULL;
       free(p); 
    }*/
    else
    {
        struct node *q,*temp;
        q=head;
        while(q->next->next!=NULL)
        {   
            q=q->next;
        }
        temp=q->next;
        q->next=NULL;
        free(temp);
        printf("\n node successfully deleted");
    }
}
void display()
{
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        struct node *temp;
        temp=head;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}

