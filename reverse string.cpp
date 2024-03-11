#include<stdio.h>
#include<string.h>
int main()
{
	char s[10],a[10];
	int i,l,j=0;
	scanf("%s",s);
	l=strlen(s);
	for(i=l-1;i>=0;i--)
	{
		a[j]=s[i];
		j++;
	}
	printf("%s",a);
	return 0;
}
