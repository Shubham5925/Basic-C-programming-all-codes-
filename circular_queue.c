//status-complete but giving unknown outputs

//To implement circular queue

#include<stdio.h>
//#define max=10;

void insert();
int delete();
void peek();
void display();

int queue[10],front=-1,rear=-1,max=10,val;

void main()
{
    int ch;
    while(1)
    {
        printf("1-insert\n2-delete\n3-peek\n4-display\n5-exit\n");
        printf("Enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert(); break;
            case 2:val=delete(); break;
                if(val!=-1)
                    printf("Value deleted successfully");
            case 3:peek();   break;
            case 4:display();break;
            case 5:return; break;
            default:printf("wrong choice");
        } 
    }   
}

void insert()
{
    int num;
    printf("Enter the element you want to insert");
    scanf("%d",&num);
    if(front==0 && rear==max-1)
        printf("Overflow :No more data can be inserted");
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=num;
    }
    else if(rear=max-1 && front!=0)
    {
        rear=0;
        queue[rear]=num;
    }
    else
    {
        rear++;
        queue[rear]=num;
    }
    
}

int delete()
{
    int num;
    printf("Enter the value you want to delete");
    scanf("%d",&num);
    if(front==-1 && rear==-1)
        return -1;
    if(front==rear)
        front=rear=-1;
    else
    {
        if(front==max-1)
            front=0;
        else
            front++;
    }
}

void peek()
{
    if(front==-1 && rear==-1)
        printf("Underflow: No element in queue");
    else
    {
        printf("Element is",queue[front]);
    }
}

void display()
{
    printf("\n");
    if(front==-1 && rear==-1)
    {
        printf("Underflow: No element in queue");
    }
    else
    {
        if(front<rear)
        {
            for(int i=front;i<=rear;i++)
            {
                printf("%d",queue[i]);
            }
        }
        else
        {
            for(int i=front;i<max;i++)
            {
                printf("%d",queue[i]);
            }
            for(int i=0;i<=rear;i++)
            {
                printf("%d",queue[i]);
            }
        }
    }
}
