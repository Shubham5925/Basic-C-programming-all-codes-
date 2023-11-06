//status-completed through printing method but not with exact division method
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

//another method
/*int n;
    printf("enter the binary number");
    scanf("%d",&n);
    while(n!=0)                   //using rem=n%10 in for loop to divide and get first no
    {
        rem=
    }*/

}