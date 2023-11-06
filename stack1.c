//status-complete
#include<stdio.h>

void push();
int pop();
int peep();
int is_empty();
int is_full();
void display();

int a[10];
int top=-1;
void main()
{
    int ch;
    while(1)
    {
        printf("1-push\n2-pop\n3-peep\n4-is_empty\n5-is_full\n6-display\n7-exit\n");
        printf("enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push(); 
            break;
            case 2: pop(); 
            break;
            case 3: peep(); 
            break;
            case 4: is_full(); 
            break;
            case 5: is_empty(); 
            break;
            case 6: display(); 
            break;
            case 7: return; 
            break;
            default: printf("wrong choice");
        }
    }
}

void push()
{
    int b;
    if(is_full())
    {
        printf("list is empty\n");
    }
    else
    {
        printf("enter the element you want to insert");
        scanf("%d",&b);
        top++;
        a[top]=b;
    }
}
int pop()
{
    int b;
    if(is_empty())
    {
        printf("stack is empty\n");
    }
    else
    {
        b=a[top];
        top--;
        printf("deleted element is:%d",b);
        
    }

}
int peep()
{
    if(is_empty())
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("top element is:%d\n",a[top]);
    }
}
int is_full()
{
    if(top>9)
    {
        //printf("stack is full\n");
        return 1;
    }
    else
    {
        //printf("stack is empty\n");
        return 0;
    }
}
int is_empty()
{
    if(top<0)
    {
       //printf("stack is empty\n");
       return 1;
    }
    else
    {
       // printf("stack is full\n");
        return 0;
    }
}
void display()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        for(int i=0;i<=top;i++)
        {
            printf("%3d\n",a[i]);
        }
    }
}