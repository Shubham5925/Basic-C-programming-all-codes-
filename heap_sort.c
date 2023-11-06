//status--correct completely
#include<stdio.h>
#include<stdlib.h>

void heap_sort();
void display();
void insert(int,int);
void create_heap();
void del_root(int);

int a[20],n;
void main()
{
    printf("Enter no of elements");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the elements");
        scanf("%d",&a[i]);
    }
    printf("Entered list\n");
    display();
    create_heap();
    printf("Heap is:\n");
    display();
    heap_sort();
    printf("sorted list is:\n");
    display();

}

void heap_sort()
{
    int last;
    for(last=n-1;last>0;last--)
    {
        del_root(last);
    }
}

void display()
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}

void insert(int num,int loc)
{
    int parent;
    while(loc>0)
    {
        parent=(loc-1)/2;
        if(num<=a[parent])
        {
            a[loc]=num;
            return;
        }
        a[loc]=a[parent];
        loc=parent;
    }
    a[0]=num;
}

void create_heap()
{
    for(int i=0;i<n;i++)
    {
        insert(a[i],i);
    }
}

void del_root(int last)
{
    int left,right,temp,i;
    i=0;
    temp=a[i];
    a[i]=a[last];
    a[last]=temp;

    left=2*i+1;
    right=2*i+2;

    while(right<left)
    {
        if(a[i]>=a[left] && a[i]>=a[right])
        return;
        if(a[right]<=a[left])
        {
            temp=a[i];
            a[i]=a[left];
            a[left]=temp;
            i=left;
        }
        else
        {
            temp=a[i];
            a[i]=a[right];
            a[right]=temp;
            i=right;
            left=2*i+1;
            right=2*i+1;

        }
    }
    if(left==last-1 && a[i]<a[left])
    {
        temp=a[i];
        a[i]=a[left];
        a[left]=temp;
    }
}

