#include<stdio.h>
int rev(int n,int b)
{ int d,sum=0;
	if(n==0)
	{
		return b;
	}
	else
	{
		
	   return rev(n/10,b*10+n%10);
	}
	
}
int main()
{
	int n,result;
	printf("enter the number:");
	scanf("%d",&n);
	result=rev(n,0);
	printf("reverse=%d",result);
	return 0;
}
