//status-complete
#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int coef,exp;
    struct node *next;
};

struct node *h1,*h2,*h3;
struct node *create_pol(void);
struct node *sum_pol(struct node *,struct node *);
void display(struct node *);

int main()
{
    h1=create_pol();
    h2=create_pol();
    h3=sum_pol(h1,h2);
    display(h1);
    display(h2);
    display(h3);
    return 0;
}
struct node *create_pol(void)
{
    struct node *head,*t,*t1;
    int a,i,n;
    head=NULL;
    printf("enter the highest degree of polynomial");
    scanf("%d",&n);
    for(int i=n;i>=0;i--)
    {
        printf("\n enter the coefficient of x^%d",i);
        scanf("%d",&a);
        if(a==0)
        {
            continue;
        }
        else 
        {
            t=(struct node *)malloc(sizeof(struct node ));
            t->next=NULL;
            t->coef=i;
            t->exp=a;
            if(head==NULL)
            {
                head=t;
            }
            else 
            {
                t1->next=t;
            }
        t1=t;
        }
    }
    return head;
}
struct node *sum_pol(struct node *t1,struct node *t2)
{
    struct node *p1,*p2,*temp,*temp1,*head;
    head=NULL;
    p1=t1;
    p2=t2;
    while(p1!=NULL && p2!=NULL)
    {
        temp=(struct node *)malloc(sizeof(struct node ));
        temp->next=NULL;
        if(p1->coef==p2->coef)
        {
            temp->exp=p1->exp+p2->exp;
            temp->coef=p1->coef;
            p1=p1->next;
            p2=p2->next;
        }
        else if(p1->coef>p2->coef)
        {
            temp->exp=p1->exp;
            temp->coef=p1->coef;
            p1=p1->next;
        }
        if(head==NULL)
        {
            head=temp;
            temp1=head;
        }
        else
        {
            temp1->next=temp;
            temp1=temp;
        }
    }
    if(p1==NULL)
    {
        temp1->next=p2;
    }
    else
    {
        temp1->next=p1;
    }
    return head;
}

void display(struct node *temp)
{
    printf("\n");
    while(temp!=NULL)
    {
        printf("%dx^%d + ",temp->exp,temp->coef);
        temp=temp->next;
    }
}