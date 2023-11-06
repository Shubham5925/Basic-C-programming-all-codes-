#include<stdio.h>
#include<string.h>
struct stu
{
    int x;
    char a[10];
    float m;
};
void main()
{
    int y;
    struct stu s[3];
    printf("enter the roll");
    for(y=0;y<=3;y++)
    {
        scanf("%d",&s[y].x);
        //gets(a);
        //scanf("%f",&s[y].m);
    }
    for(y=0;y<=3;y++)
    {
        scanf("%f",&s[y].m);
    }
    for(y=0;y<3;y++)
    {
        printf("%3d",s[y].x);
        //puts(s[y].a);
        //printf("%f",s[y].m);
    }
    for(y=0;y<=3;y++)
    {
        printf("%f \n",s[y].m);
    }
    s[0].a='shubhamsingh';
    printf("%s",s[0].a);

}