#include<stdio.h>
#include<stdlib.h>
struct stu  //defining structure
{
    int x;       //structure members
    char y[20];  //structure members
};
struct stu *s; //declaring the structure pointer
void main()
{
    
    s=(struct stu*)malloc(sizeof(struct stu)); //allocating DM
    printf("memory allocated is %d\n",s);
    printf("enter the element");
    scanf("%d",&s->x);//storing value in dynamic created memory which is pointing to x
    printf("%d",s->x);// printing value stored in dynamic memory
   // printf("memory allocated is %d\n",s);

}