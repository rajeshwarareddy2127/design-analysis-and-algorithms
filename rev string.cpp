#include<stdio.h>
#include<string.h>
void rev(char s1[],char s[],int n,int i)
{  
 static int j=0;
  if(i<=-1)
  {
  	return;
  }
  else
  {
    s[j]=s1[i];
    j++;
	return rev(s1,s,n,i-1); 	
	  }	
}
int main()
{
	char s1[10],s[10];
	int n;
	scanf("%s",s1);
	n=strlen(s1);
	rev(s1,s,n,n-1);
	printf("%s",s);
}
