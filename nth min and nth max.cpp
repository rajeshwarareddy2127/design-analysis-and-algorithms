#include<stdio.h>
int main()
{
	int min,temp,n,m,i,j,l,a[10];
	printf("enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the nth min:");
	scanf("%d",&l);
	printf("enter the nth max:");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			 temp=a[i];
			a[i]=a[j];
			a[j]= temp;
		}
		}
	}
	printf("min=%d",a[l-1]);
	printf("max=%d",a[n-m]);
}
