#include<stdio.h>

void main()
{
    int *p,x;
    printf("enter the number");
    scanf("%d",&x);
    p=&x;
    printf("the value is",p);
}