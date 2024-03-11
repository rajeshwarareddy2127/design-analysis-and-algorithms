#include<stdio.h>
#include<math.h>
int armstrong(int n)
{
	int d,temp;
	
	if(n==0)
	{
		return 0;
	}
	
	else
	{
		d=n%10;
		return (pow(d,3)+armstrong(n/10));
	}

}
int main()
{
	int n,temp;
	scanf("%d",&n);
		if(armstrong(n)==n)
	{
		printf("armstrong");
	}
	else
	{
		printf(" not armstrong");
	}

	return 0;
}
