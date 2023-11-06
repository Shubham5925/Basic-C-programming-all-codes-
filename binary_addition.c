//status -incomplete
#include<stdio.h>
void main()
{
    int a[10],b[10],c[10],n,m;
    printf("enter the no of binary digits");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the no of binary digits");
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    if(n>m)
    {
        for(int i=0;i<n;i++)
        {
            int s=0;
            if(a[i]==0 && b[i]==1)
            {
                c[s]=1;
                s++
            }
            else if(a[i]==1 && b[i]==0)
            {
                c[s]=1;
                s++
            }
            else if(a[i]==0 && b[i]==0)
            {
                c[s]=0;
                s++
            }
            else
            {
                c[s]=11;
                s++
            }

        }
    }
    else
    {
        for(int i=0;i<m;i++)
        {
            c[i]=a[i]+b[i];
        }
    }

}