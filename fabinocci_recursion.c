//status=correct of fibo using recursion
#include<stdio.h>

int fibo(int n);

int main()
{
    int a,b;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
            b=fibo(i);
            printf("%d\t",b);
    }
}
int fibo(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}

