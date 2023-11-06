//status--
//Tree Implementation

#include<stdio.h>

void insert();
void display();

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL:

void main()
{
    int ch;
    while(1)
    {
        printf("1-insert\n2-display\n3-exit");
        printf("Enter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert(); break;
            case 2:display(); break;
            case 3:return;  break;
            default:printf("Wrong choice:");
        }
    }
}

void insert()
{
    
}