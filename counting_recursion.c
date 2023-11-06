//status =incomplete
#include<stdio.h>

int count(int n,int m);

int main()
{
    int a,b,c;
    printf("lower limit");
    scanf("%d",&a);
    printf("upper limit");
    scanf("%d",&b);
    c=count(a,b);
    printf("%d",c);
}
int count(int n,int m)
{
    if(m>n)
        return (count(n++));
    else
        return 0;
        
    
}