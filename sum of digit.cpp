#include<stdio.h>
int main()
{
	int a[10],b[10],i,m,n,s,e,sum;
	int l=0,max;
	printf("enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the start index:");
	scanf("%d",&s);
	printf("enter the end index:");
	scanf("%d",&e);
	if((s & e)<n && s!=e)
	{
		for(i=s;i<=e;i++)
		{
			m=a[i];
			sum=0;
			while(m!=0)
			{
				sum=sum+(m%10);
				m/=10;
			}
			b[l]=sum;
			l++;
		}
	}
	for(i=0;b[i]!='\0';i++)
	{
		printf("digit=%d\n",b[i]);
	}
	max=b[0];
	for(i=0;b[i]!='\0';i++)
	{
		if(max<b[i])
		{
			max=b[i];
		}
	}
	printf("max=%d",max);
	
}
