//making double node
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void main()
{
    struct node *p,*q,*temp;

    p=(struct node*)malloc(sizeof(struct node));
    q=(struct node*)malloc(sizeof(struct node)); 

    printf("enter the element of head node");
    scanf("%d",&p->data);
    printf("enter the element of second node");
    scanf("%d",&q->data);

    //head=p;
    p->next=q;    //imp-order sometimes imp and sometimes not important
    q->next=NULL;
    head=p;
    temp=head;
    while(temp!=NULL)
    {
        printf("%3d",temp->data);
        temp=temp->next;
    }
    //printf("%d",head->data);
    //printf("%d",q->data);
}
