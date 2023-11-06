//status- not completed its 1 s compliment
#include<stdio.h>
void main()
{
    int a[20],b[20],n,s=0;
    printf("enter the total binary digits");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            //printf("1");
            
            b[s]=1;
            s++;
        }
        else
        {
            //printf("0");
            b[s]=0;
            s++;
            
        }
    }
    for(int i=0;i<s;i++)
    {
        printf("%d",b[i]);
    }

}