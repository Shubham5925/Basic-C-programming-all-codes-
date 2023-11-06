#include<stdio.h>

int main()
{
     
    char s[20]={'s','h','u','b','h','a','m',' ','s','i','n','g','h','\0'};
    char str[10]="shubham";
    puts(s);
    puts(str); //no format specifier s because puts only used for string:
    //puts bring cursor to new line after print:
      
    /*Taking input from user*/
    char string[10];
    printf("To take input we can directly use s\n");
    scanf("%s",string);
    puts(string);
}