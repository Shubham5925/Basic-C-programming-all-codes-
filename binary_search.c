#include<stdio.h>
#include<stdlib.h>
int binary_search(int no,int *a,int n);
void main()
{
    int *a,n,i,no,f;
    printf("enter the size of array");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    for(int i=0;i<=n;i++)
    {
        printf("enter the value of array");
        scanf("%d",&a[i]);
    }
    printf("enter the element you want to search");
    scanf("%d",&no);
    f=binary_search(no,a,n);
    if(f=1)
        printf("value is found");
    else 
        printf("value is not found");
}
int binary_search(int no,int *a,int n)
{
    int l,h,mid;  
    l=0;
    h=n-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(mid==no)
            printf("value is present");
        else if(a[mid]>no)
            l=mid+1;
        else if(a[mid]<no)
            h=mid-1;
        
        return 0;
    }

}