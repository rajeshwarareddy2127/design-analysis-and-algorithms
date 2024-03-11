#include<stdio.h>
int min,max;
int a[100];
void maxmin(int i,int j)
{
	int max1,min1,mid;
	if(i==j)
	{
		max=min=a[i];
	}
	else if(i==j-1)
	{
		if(a[i]<a[j])
		{
			max=a[j];
			min=a[i];
		}
		else
		{
			max=a[i];
			min=a[j];
		}
	}
	else
	{
		mid=(i+j)/2;
		maxmin(i,mid);
		max1=max;
		min1=min;
		printf("mid=%d",mid);
		maxmin(mid+1,j);
		if(max<max1)
		{
			max=max1;
		}
		if(min>min1)
		{
			min=min1;
		}
		
	}
}
int main()
{
	int i,num;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	maxmin(1,num);
	printf("min=%d\n",min);
	printf("max=%d",max);
}
