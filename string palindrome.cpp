#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	int l,i,flag;
	printf("enter the string:");
	scanf("%s",s);
	l=strlen(s);
	flag=0;
	for(i=0;i<l;i++)
	{
		if(s[i]!=s[l-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("string not a pallindrome");
	}
	else
	{
		printf("string palindrome");
	}
}
