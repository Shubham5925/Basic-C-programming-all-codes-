#include<stdio.h>

struct edge
{
    int v1,v2,w;
};

void main()
{
    int n,temp;
    printf("enter the size ");
    scanf("%d",&n);
    struct edge graph[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&graph[i].v1);
        scanf("%d",&graph[i].v2);
        scanf("%d",&graph[i].w);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d %d %d\n",graph[i].v1,graph[i].v2,graph[i].w);
    }
    //now bubble sorting for getting weights
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(graph[j].w>graph[j+1].w)
            {
                temp=graph[j].w;
                graph[j].w=graph[j+1].w;
                graph[j+1].w=temp;
            }
        }
    }

    printf("\n");
    

    for(int i=0;i<n;i++)
    {
        printf("%d %d %d\n",graph[i].v1,graph[i].v2,graph[i].w);
    }
}