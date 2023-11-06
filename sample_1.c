#include<stdio.h>
int fun(int);
void main()
{
    int y,x;
    y=fun(1);
    printf("%d\n",y);
    x=fun(5);
    printf("%d\n",x);
}
int fun(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else 
    {
        return(n*fun(n-1));
    }
}