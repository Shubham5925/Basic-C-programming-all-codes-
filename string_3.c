#include<stdio.h>

int main()
{
    char s[20];
    printf("Enter the string with space :");
    scanf("%s",s);
    puts(s);

    for(int i=0;i<2;i++)
    {
        printf("%s",s);
    }
    return 0;
}