/*#include<stdio.h>
void main()
{
    int a[3][3];
    printf("enter the elements of matrix");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
    }
}*/
#include <stdio.h>
void main() 
{
    int n;
    scanf("%d", &n);
    if(n>0)
    {
        for(int i=0;i<n*2-1;i++)
        {
            printf("/n");
            for(int j=0;j<=n*2-1;j++)
            {
                printf("%d",n);
            }
        }
    }
  	// Complete the code to print the pattern.

}