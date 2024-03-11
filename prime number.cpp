#include<stdio.h>
int checkprime(int i,int num)
{
	if(num==i)
	{
		return 0;
	}
	else
	{
		if(num%i==0)
		{
			return 1;
		}
	else
	{
		return checkprime(i+1,num);
	}
  }
}
int main()
{
	int n,i;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(checkprime(2,i)==0)
		{
			printf("%d,",i);
		}
	}
}
