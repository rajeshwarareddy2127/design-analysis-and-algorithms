#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int n,i,a,b,flag,flag1=1;
	printf("enter the string");
	scanf("%s",s);
	flag=1;
	n=strlen(s);
	for(int i=0;i<n;i++)
	{
		if(s[i]!='0'&& s[i]!='1')
		{
			flag=0;
		}
	}
	if(flag!=1)
	{
		printf("string is not valid");
	}
	if(flag==1)
	{
		flag1=1;
		a=0;
		b=n-1;
		while(a!=(n/2))
		{
			if(s[a]!=s[b])
			{
				flag1=0;
			}
			a++;
			b--;
		}
		if(flag1==1)
		{
			printf("string is pollindrum\n");
			printf("string is accept");
		}
		else
		{
			printf("string is not pollindrum");
			printf("string is not valid");
		}
	}
}
