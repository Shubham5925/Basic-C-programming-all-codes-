//Implementation of graph

#include<stdio.h>

struct edge
{
	int v1,v2,w;
};
void main()
{
	int e,temp;
	printf("No of edges");
	scanf("%d",&e);
	struct edge graph[e];
	
	for(int i=0;i<e;i++)
	{
		scanf("%d",graph[i].v1);
		scanf("%d",graph[i].v2);
		scanf("%d",graph[i].w);
	}
	for(int i=0;i<e;i++)
		printf("%d %d %d",graph[i].v1,graph[i].v2,graph[i].w);
	for(int i=0;i<e;i++)
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
	printf("MInimum cost is:");
	for(int i=0;i<e;i++)
		printf("%d %d %d",graph[i].v1,graph[i].v2,graph[i].w);
}