#include<stdio.h>
int main()
{
	int tar,n,a[10],i;
	int j,sum;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the target:");
	scanf("%d",&tar);
	for(i=0;i<n;i++)
	{
		sum=a[0];
		for(j=0;j<n;j++)
		{
			if(a[i]+a[j]==tar)
			{
				printf("%d %d",a[i],a[j]);
			}
		}
	}
}
