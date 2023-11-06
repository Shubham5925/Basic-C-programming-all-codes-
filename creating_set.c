#include<stdio.h>
void set();
void main()
{
    
}
void set()
{
    int a[20],n,x;
    printf("enter the no of elements");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        a[i]=x;
        for(int j=0;j<=i;j++)
        {
            if(a[i]==a[j])
            {
                c[i]=x;
            }

        }

    }
}