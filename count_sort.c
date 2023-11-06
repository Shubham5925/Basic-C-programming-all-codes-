status-wrong logic in array initialization

#include<stdio.h>
#include<stdlib.h>

int count_sort();

void main()
{
    count_sort();
    
}

int count_sort()
{
    //int a[]={1,2,3,4,8,8,1,2};
    int a[5];
    printf("enter the elements");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int n=sizeof(a);
    int max,*count;
    max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }

    count=(int *)malloc((max+1)*sizeof(int));
    for(int i=0;i<=max;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    int i=0;
    int j=0;

    while(j<=max)
    {
        if(count[j]>0)
        {
            a[i]=j;
            count[j]--;
            i++;
        }
        else
            j++;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}

 