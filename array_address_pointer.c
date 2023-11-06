#include<stdio.h>
void main()
{
    int x[5]={1,2,3,4,5},i,*p;
    for(i=0;i<=4;i++)
    {
        printf("without pointer %d\n",x[i]);
    }
    p=x;
    for(i=0;i<=4;i++)
    {
        printf("with pointer %d \n",*(p+i));
    }
    printf("%d",p);

}