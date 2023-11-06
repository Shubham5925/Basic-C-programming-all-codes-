#include<stdio.h>
void add(int *,int *);
void main()
{
    int *x,*y;
    
    add(&x,&y);
    //printf("\n");
    
    
}
void add(int *a,int *b)
{
    int *a,*b,c;
    printf("enter the first numbers");
    scanf("%d",&a);
    printf("enter the next number");
    scanf("%d",&b);
    c=*a+*b;
    printf("sum is===%d",c);
}