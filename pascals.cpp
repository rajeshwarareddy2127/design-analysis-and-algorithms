#include<stdio.h>
int main()
{
	int i,j,l,co,n;
	printf("enter the number n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("  ");
		}
		for(l=0;l<=i;l++)
		{
			if(l==0 || i==0)
				co=1;

			else
				co=co*(i-l+1)/l;
				printf("%4d",co);
		}
		printf("\n");
	}
}
