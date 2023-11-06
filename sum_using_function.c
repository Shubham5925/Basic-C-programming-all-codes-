#include<stdio.h>
void add(void);
void main()
{
    
    add();
    printf("\n");
    add();
    
}
void add()
{
    int a,b,c;
    printf("enter the first numbers");
    scanf("%d",&a);
    printf("enter the next number");
    scanf("%d",&b);
    c=a+b;
    printf("sum is===%d",c);
}