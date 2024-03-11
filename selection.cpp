#include<stdio.h>
int selection(int n,int a[])
{
	int i,j,small,temp;
	for(i=0;i<n-1;i++)
	{
		small=i;
		for(j=i+1;j<n;j++)
		
			if(a[j]<a[small])
			{
				small=j;
			}
	
	    temp=a[small];
	    a[small]=a[i];
	    a[i]=temp;
		    
		
	}
}
int main()
{
	int n,a[10];
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selection(n,a);
	printf("after the sorting");
	for(i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}
}
