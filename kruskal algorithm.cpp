#include<stdio.h>
int a,b,j,i,n,u,v,ne=1;
int min,cost[10][10];
int visited[10]={0},mincost=0;
int main()
{
	printf("enter the number of node:");
	scanf("%d",&n);
	printf("enter the adacency matrix:");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
			{
				cost[i][j]=999;
			}
     	}
	}
	visited[1]=1;
	printf("\n");
	while(ne<n)
	{
		min=999;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(cost[i][j]<min)
			{
				if(visited[i]!=0)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
				if(visited[u]==0|| visited[v]==0)
				{
					printf("\n edges:%d (%d %d) cost=%d",ne++,a,b,min);
					mincost+=min;
					visited[b]=1;
				}
				cost[a][b]=cost[b][a]=999;
			}
		}
	}
  } 
  printf("\nmincost=%d",mincost);
	
}