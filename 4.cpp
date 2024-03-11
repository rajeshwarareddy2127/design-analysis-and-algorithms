#include<stdio.h>
int main()
{
	int a[10],n,i,key,flag;
	printf("enter the number:");
	scanf("%d",&n);
	printf("enter the number:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number:");
	scanf("%d",&key);
	flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("element found in %d",i);
	}
	else
	{
		printf("not found");
	}
}
