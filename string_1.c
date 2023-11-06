#include<stdio.h>
int main()
{
    char s[10]={'s','h','u','b','h','a','m','\0'};
    for(int i=7;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    printf("\n");
    /*printf("%c",s[6]);
    printf("%c",s[7]);
    printf("%s",s);
    return 0;*/

    //We Have Two Methods of printing string
    //1-As char = printf("%c",s[i]);
    //2-As string = printf("%s",s);
}