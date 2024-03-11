#include<stdio.h>
#include<string.h>
int main()
{
	char s[100][100];
	char key[100];
	int low,high,mid,flag;
	int i,j,n;
	printf("enter the no of elements array:");
	scanf("%d",&n);
	printf("enter the key:");
	scanf("%s",key);
	for(i=0;i<n;i++)
	{
		for(j=0;j<1;j++)
		{
			printf("entert the %d",i);
			scanf("%s",&s[i][j]);
		}
	}
	low=0;
	high=n-1;
	 flag=0;
	while(low<high)
	{
		mid=low+high/2;
		if(strcmp(s[mid],key)>0)
		{
			high=mid-1;
		}
		else if(strcmp(s[mid],key)<0)
		{
			low=mid+1;
		}
		else if(strcmp(s[mid],key)==0)
		{
			 flag=1;
			break;
		}
	}
	if( flag==1)
	{
		printf("string is found in %d",mid);
	}
	else
	{
		printf("string not found");
	}
}
