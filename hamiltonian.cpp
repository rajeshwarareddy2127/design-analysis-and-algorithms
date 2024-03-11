#include<stdio.h>
#define max 100
bool issafe(int graph[][max],int n,int path[],int v)
{
	for(int i=0;i<n;i++)
	{
		if(path[i]==v)
		{
			return false;
		}
	}
		return graph[path[n-1]][v];
}
bool hamiltonian(int graph[][max],int n,int path[],int pos)
{
	if(pos==n)
	{
		if(graph[path[n-1]][path[0]])
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	for(int v=0;v<n;v++)
	{
		if(issafe(graph,n,path,v))
		{
			path[pos]=v;
			if(hamiltonian(graph,n,path,pos+1))
			{
				return true;
			}
			path[pos]=-1;
		}
	}
	return false;
}
int main()
{
	int graph[100][max];
	int n,i;
	printf("enter the vertex:");
	scanf("%d",&n);
	int path[n];
	printf("enter the graph");
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
		for(i=0;i<n;i++)
	{
		path[i]=-1;
	}
	if(hamiltonian(graph,n,path,0))
	{
		printf("path=");
		for(i=0;i<n;i++)
		{
			printf("%d,",path[i]);
		}
	}
	else
	{
		printf("no hamiltonian path");
	}
	return 0;
}
