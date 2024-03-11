#include<stdio.h>
#include<string.h>
int copy(char s[],int n)
{
	char r[20],i=0;
	if(i==n-1)
	{
	return 0;
	}
	else
	r[i]=s[i];
	return copy(s[i++],n);
}
int main()
{
	char s[10];
	int n;
	scanf("%s",s);
	n=strlen(s);

	copy(s,n);
}
