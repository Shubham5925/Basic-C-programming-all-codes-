//making single node
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
    struct node *p;

    p=(struct node*)malloc(sizeof(struct node)); 

    printf("enter the element of head node");
    scanf("%d",&p->data);
    //head=p;
    p->next=NULL;    //imp-order is not important
    head=p;

    printf("%d",head->data);
}
