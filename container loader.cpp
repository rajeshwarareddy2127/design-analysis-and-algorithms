#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,m,t,n;
	int a[100];
	printf("enter the container:");
	scanf("%d",&n);
	printf("enter the number of elements:");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("enter the %d item:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<k-1;i++)
	{
		m=i;
		for(j=i+1;j<k;j++)
		{
			if(a[j]<a[m])
			{
			m=j;
		   }
		}
		t=a[i];
		a[i]=a[m];
		a[m]=t;
	}
	for(i=0;i<=k;i++)
	{
		if(n-a[i]>0)
		{
			n=n-a[i];
			printf("the elements %d has been inserted\n",a[i]);
			printf("the size of container is n%d\n:",n);
		}
		else
		{
			printf("containeer limited\n");
			printf("the remaining size of container %d",n);
			break;
		}
	}
}
