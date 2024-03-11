#include<stdio.h>
int a,b,u,v,i,j,n,ne=1;
int cost[100][100],visited[10]={0};
int min,mincost=0;
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	printf("enter the adjacency matrix:");
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
			//min=999;
			for(j=1;j<=n;j++)
			{
				if(cost[i][j]<min)
				{
				if(visited[i]!=0)
				{
					a=u=i;
					b=v=j;
					min=cost[i][j];
				}
				if(visited[u]==0|| visited[v]==0)
				{
					printf("\n edges:%d(%d  %d)=%d",ne++,a,b,min);
					mincost+=min;
					visited[b]=1;
				}
				cost[a][b]=cost[b][a]=999;
			}
		}
	}
}
printf("mincost=%d",mincost);
}
