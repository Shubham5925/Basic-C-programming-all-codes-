//status- afternode not working
#include<stdio.h>
#include<stdlib.h>

void add_beg();
void add_last();
void add_afternode();
void del_beg();
void del_last();
void del_anynode();
void reverse();
void display();

struct node 
{
    int data;
    struct node *pre,*next;
};
struct node *head=NULL;
void main()
{
    int ch;
    while(1)
    {
        printf("1-add_beg\n2-add_last\n3-add_afternode\n4-del_beg\n5-del_last\n6-del_anynode\n7-reverse\n8-display\n9-exit\n");
        printf("enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:add_beg(); break;
            case 2:add_last(); break;
            case 3:add_afternode(); break;
            case 4:del_beg(); break;
            case 5:del_last(); break;
            case 6:del_anynode(); break;
            case 7:reverse(); break;
            case 8:display(); break;
            case 9:return; break;

        }
    }
}
void add_beg()
{
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    printf("enter the elements");
    scanf("%d",&t->data);
    t->pre=NULL;
    t->next=head;
    head=t;
    printf("node added at beginning\n");
}
void add_last()
{
    struct node *t,*q;
    t=(struct node *)malloc(sizeof(struct node));
    printf("enter the element");
    scanf("%d",&t->data);
    q=head;
    while(q->next!=NULL)
    {
        q=q->next;
    }
    q->next=t;
    t->next=NULL;
    t->pre=q;
    printf("node added at last\n");
}
void add_afternode()
{
    struct node *t,*q,*p;
    int key,f=0;
    t=(struct node *)malloc(sizeof(struct node));
    printf("enter the element you want to add");
    scanf("%d",&t->data);
    printf("enter the element after which you want to add ");
    scanf("%d",&key);
    q=head;
    while(q->next!=NULL)
    {
        if(q->data==key)
        {
            t->pre=q;
            t->next=q->next;
            q->next->pre=t;
            q->next=t;
            /*p=q->next;
            p->next=t;
            t->next=q->next->next;
            t->pre=p;*/
            printf("node added successfully\n");

        }
        else
        {
            f=0;
            q=q->next;
        }
    }
    if(f=0)
    {
        printf("value does not exist in list\n");
    }
}
void del_beg()
{
    struct node *t;
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        t=head;
        head=t->next;
        head->pre=NULL;
        free(t);
        printf("beg node deleted");
    }

}
void del_last()
{
    struct node *t,*q;
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        t=head;
        while(t->next->next!=NULL)
        {
            t=t->next;
        }
        q=t->next;
        t->next=NULL;
        q->pre=NULL;
        free(q);
        printf("node deleted successfully\n");

    }
}
void del_anynode()
{
    struct node *t,*q,*p;
    int key,f=0;
    printf("enter the value you wanted to delete");
    scanf("%d",&key);
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else if (head->data==key)
    {
        q=head;
        head=q->next;
        head->pre=NULL;
        free(q);
        printf("node deleted successfully\n");
    }
    
    else 
    {
        t=head;
        while(t->next!=NULL)
        {
            if(t->next->data==key)
            {
               /* q=t->next;
                q->pre->next=q->next;
                q->next->pre=q->pre;
                printf("node deleted successfully\n");*/
                q=t->next;
                p=q->next;
                t->next=p;
                p->pre=t;
                free(q);
                printf("value deleted successfully\n");
            }
        

            else
            {
                f=0;
                t=t->next;

            }
        }
        if(f=0)
        {
            printf("value does not exist\n");
        }
    
        
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
void reverse()
{
    struct node *t,*q;
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else if(head->next=NULL)
    {
        printf("only single node exist\n");
    }
    else
    {
        t=head;
        while(t->next!=NULL)
        {
            q=t->next;
            t->next=head;
            t->pre=NULL;
            q=q->next;
            t=t->next;
            


        }
    }
}



