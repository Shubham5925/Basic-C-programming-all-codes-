// Online C compiler to run C program online
#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("/n");
        for(int j=n;j>=n+1-i;j--)
        {
            printf("%d",j);
        }
    }

    return 0;
}