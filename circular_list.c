//add,del,at beg and end and reversing the circular linked list
#include<stdio.h>
#include<stdlib.h>

void add_beg();
void add_last();
void del_beg();
void del_last();
void del_anynode();
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
        printf("----------MAIN MENU--------\n");
        printf("1-add_beg\n2-add_last\n3-del_beg\n4-del_last\n5-del_anynode\n6-display\n7-exit\n");
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

            case 5: del_anynode();
            break;

            case 6: display();
            break;

            case 7: return;
            break;

            default: printf("wrong choice");

        }
    }
}
void add_beg()
{
    struct node *p,*t;
    p=(struct node *)malloc(sizeof(struct node));
    printf("enter the element");
    scanf("%d",&p->data);
    if(head==NULL)
    {
        head=p;
        p->next=head;
        head->next=p;
        printf("node added successfully");
    }
    else
    {
        t=head;
        while(t->next!=head)
        {
            t=t->next;
        }
        t->next=p;
        p->next=head;
        head=p;
        printf("node added successfully");
    }
}
void add_last()
{
    struct node *p,*t;
    p=(struct node *)malloc(sizeof(struct node));
    printf("enter the element");
    scanf("%d",&p->data);
    t=head;
    while(t->next!=head)
    {
        t=t->next;
    }
    t->next=p;
    p->next=head;
    printf("node added successfully at last");
}
void del_beg()
{
    struct node *p,*t;
    t=head;
    while(t->next!=head)
    {
        t=t->next;
    }
    t->next=head->next;
    free(head);
    head=t->next;
    printf("beginning node deleted");
}
void del_last()
{
    struct node *t,*q;
    t=head;
    while(t->next->next!=head)
    {
        t=t->next;
    }
    q=t->next;
    t->next=t->next->next;
    free(q);
    printf("last node deleted successfully");
}
void del_anynode()
{
    struct node *p,*t,*q;
    int key,f=0;
    printf("enter the element you want to delete");
    scanf("%d",&key);
    if(head==NULL)
    {
        printf("list is empty");
    }
    else if(head->data==key)
    {
        struct node *p,*t;
        t=head;
        while(t->next!=head)
        {
            t=t->next;
        }
        t->next=head->next;
        free(head);
        head=t->next;
        printf("node deleted successfully");
    }
    else
    {
        t=head;
        q=t;
        while(t->next!=head)
        {
            if(t->next->data==key)
            {
                q=t->next;
                t->next=t->next->next;
                free(q);
                printf("node deleted");
            }
            else
            {   
                f=0;
                t=t->next;
            }
            if(f=0)
            {
                printf("element does not exit in a linked list");
            }
        }
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
    while(temp->next!=head)
    {
        printf("%d \t",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);

}