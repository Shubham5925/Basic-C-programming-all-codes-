#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int i;
    printf("enter the str");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}