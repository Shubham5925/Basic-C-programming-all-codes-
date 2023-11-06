#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%s",&str[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%s",str[i]);
    }

    //scanf("%[^\n]%*c",str);
    //printf("\n %s",str);
}