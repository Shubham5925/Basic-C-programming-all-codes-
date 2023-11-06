#include<stdio.h>
void main()
{
    int a[5],i,j,t;
    printf("enter the elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[j+1]>a[j])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%3d",a[i]);
    }

}