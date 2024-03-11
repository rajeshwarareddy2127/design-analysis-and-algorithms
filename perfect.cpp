#include<stdio.h>
int main()
{
	int n,sum=0,i,temp;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==temp)
	{
		printf("perfect number");
	}
	else
	{
		printf("not perfect number");
	}
}
