#include<stdio.h>
int main()
{
	int i,j,k=0,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=0;
		for(j=1;j<=i;j++)
		{
			k=k+1;
			printf(" %d",k);
			
		}
		printf("\n");
	}
}
