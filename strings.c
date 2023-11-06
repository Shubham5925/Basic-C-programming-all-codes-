#include<stdio.h>
#include<string.h>
int main()
{
    char a,b[10],c[100];
    printf("enter the string");
    scanf("%c",&a); 
    printf("enter the next scharacter");
    scanf("%s",b);
    scanf("\n");
    printf("enter th sentence");
    scanf("%[^\n]%*c",c);

    printf("%c\n",a);
    printf("%s\n",b); 
    printf("%s\n",c);
    
    return 0;
}