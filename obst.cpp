#include <stdio.h>

int sum(int freq[], int low, int high)
 {
    int sum = 0;
    for (int k = low; k <= high; k++) 
	{
        sum += freq[k];
    }
    return sum;
}

int minCostBST(int keys[], int freq[], int n) 
{
    int cost[n][n];
    for (int i = 0; i < n; i++) 
	{
        cost[i][i] = freq[i];
    }
    for (int length = 2; length <= n; length++) 
	{
        for (int i = 0; i <= n - length + 1; i++)
		 {
            int j = i + length - 1;
            cost[i][j] =999;
            for (int r = i; r <= j; r++)
			 {
                int c = 0;
                if (r > i)
				 {
                    c += cost[i][r - 1];  
                }
                if (r < j)
				 {
                    c += cost[r + 1][j];  
                }
                c += sum(freq, i, j);      
                if (c < cost[i][j]) 
				{
                    cost[i][j] = c;
                }
            }
        }
    }
    return cost[0][n - 1];
}

int main()
 {
    int keys[10], freq[10];
    int n,i;
    printf("enter the no, of nodes:");
    scanf("%d",&n);
    printf("enter the keys:");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&keys[i]);
	}
	printf("enter the freq of node:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&freq[i]);
	}

    int minCost = minCostBST(keys, freq, n);
    printf("Minimum cost of optimal binary search tree: %d\n", minCost);

    return 0;
}

