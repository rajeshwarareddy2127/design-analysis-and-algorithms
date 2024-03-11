#include<stdio.h>
int main()
{
	int a[10],key,flag;
	int n,i,low,high,mid;
	printf("Enetr rhe no.of elements ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enteret he key vlue");
	scanf("%d",&key);

	flag=0;
	low=0;
	high=n-1;
//	printf("%d",high);
	while(low<high)
	{
		mid=(low+high)/2;
	//	printf("%d",mid);
		if(a[mid]>key)
		{
			high=mid-1;
		}
		else if(a[mid]<key)
		{
			low=mid+1;
		}
		else if(a[mid]==key)
		{
			flag=1;
			break;
	    }
    }
    if(flag==1)
    {
    	printf("element found at:%d",mid);
	}
	else
	{
		printf("not found");
	}
    return 0;
}
