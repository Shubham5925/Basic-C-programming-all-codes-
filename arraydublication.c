#include<stdio.h>
void main()
{
    int a[20],i,y,n,b=0;
    printf("enter the size of array");
    scanf("%d",&n);
    for (i=0;i<n; i++)
    {
        printf("enter the elements of array");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    for(y=0;y<n;y++)
    {
        for(i=y+1;i<n;i++)
        {
            if(a[y]==a[i])
            {
                b++;
                break;
               // printf("duplicate values are %d\n ",b);

            }
            //printf("duplicate values are %d\n ",b);
        }
    }
    printf("duplicate no of are %d\n ",b);
    printf("duplicate index is %d %d\n ",y,i);
    
}