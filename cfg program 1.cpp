#include<stdio.h>
#include<string.h>
int main()
{
	char st[100];
	int flag,l,i;
	printf("enter the string:");
	scanf("%s",st);
	l=strlen(st);
//	printf("%d",l);
	flag=1;
	for(i=0;i<l;i++)
	{
		if(st[i]!='0' &&st[i]!='1')
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
		if(st[0]=='0' && st[l-1]=='1' )
		{
			printf("string is accept");
		}
		else
		{
			printf("string not accepted");
		}
	}
	
	
}
