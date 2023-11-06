//status-only output sorted array is not printing
#include<stdio.h>
#include<stdlib.h>

void quicksort(int *,int,int);
int partition(int *,int,int);
int a[10]={5,3,5,3,8,2,1,7,9,3};

void main()
{
    int i;
    int a[10]={5,3,5,3,8,2,1,7,9,3};
    printf("\n quick sort");
    printf("\n array before sorting");
    for(i=0;i<10;i++)
        printf("%4d",a[i]);
    quicksort(a,0,9);
    printf("\n array after sorting");
    for(i=0;i<10;i++)
        printf("%4d",a[i]);
}
void quicksort(int a[],int lower,int upper)
{
    int i;
    if(upper>lower)
    {
        i=partition(a,lower,upper);
        quicksort(a,lower,i-1);
        quicksort(a,i+1,upper);

    }
}
int partition(int a[],int lower,int upper)
{
    int i,p,q,t;
    p=lower+1;
    q=upper;
    i=a[lower];
    while(q>=p)
    {
        while(a[p]<i)
            p++;
        while(a[q]>i)
            q--;
        if(q>p)
        {
            t=a[p];
            a[p]=a[q];
            a[q]=t;
        }
    }
    t=a[lower];
    a[lower]=a[q];
    a[q]=t;
    return q;
}