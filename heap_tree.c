#include<stdio.h>

int main()
{
    int a[6],temp;
    printf("Enter the elements of array\n");
    for(int i=0;i<6;i++)
    {
        printf("Enter the elements");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<6;i++)
    {
        while(i>=0)
        {
            for(int j=i;j>=0;j--)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
            i--;
        }
    }
    
    for(int i=0;i<6;i++)
    {
        
        printf("%d\n",a[i]);
    }
    
    return 0;

}