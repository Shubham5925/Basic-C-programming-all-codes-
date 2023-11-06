//status- correct recursive program

#include<stdio.h>

int fact(int n);

int main()
{
    int a,b;
    scanf("%d",&a);
    b=fact(a);
    printf("factorial is=%d ",b);
}
int fact(int n)
{
    int sum=0;
    if(n==1)
        return 1;
    else
        return (n*fact(n-1));
        
    

}