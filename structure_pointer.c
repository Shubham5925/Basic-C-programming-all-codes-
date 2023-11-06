//status-complete
#include<stdio.h>
#include<stdlib.h>
struct stu
{
    int x;
    char y[20];
    float z;
};
struct stu *emp;
void main()
{
   emp=(struct stu *)malloc(sizeof(struct stu)) ;
   emp->x=18;
   printf("%d",emp->x);
}