//status-complete
#include<stdio.h>
#include<stdlib.h>
// remember if adding at beg then pop at beginning only and is pushing at last then delete form last only;
void push();
void pop();
void peep();
void display();
int is_empty();
int is_full();


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
        printf("1-push\n2-pop\n3-peep\n4-display\n5-is_empty\n6-is_full\n7-exit\n");
        printf("enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push(); 
            break;

            case 2:pop(); 
            break;

            case 3:peep(); 
            break;

            case 4:display(); 
            break;

            case 5:is_empty();
            break;

            case 6:is_full();
            break;

            case 7:return; 
            break;

            default: printf("wrong choice");
        }
    }
}
void push()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    printf("enter the elements");
    scanf("%d",&p->data);
    p->next=head;
    head=p;
    printf("value inserted in stack\n");

}
void pop()
{
    if(head==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        struct node *q;
        q=head;
        head=head->next;
        free(q);
        printf("value poped out successfully\n");
    }
    
}
void peep()
{
    if(head==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        struct node *t;
        t=head;
        printf("top element is %d at %d\n",t->data,&t);
    }
    
}
void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
int is_empty()
{
    if(head==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int is_full()
{
    if(head!=NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}