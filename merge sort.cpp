#include<stdio.h>
void mergesort(int a[],int beg,int mid,int end)
{
	int k,i,j;
 int 	n1=mid-beg+1;
int 	n2=end-mid;
	int left[n1],right[n2];
	for(i=0;i<=n1;i++)
	{
     left[i]=a[beg+i];
     printf("inside left=%d\n",left[i]);
    }
    for(j=0;j<=n2;j++)
    {
	right[j]=a[mid+1+j];
	
    }
    i=0;
	j=0;
	k=beg;
    while(i<n1 && j<n2)
    {
    	if(left[i]<=right[j])
    	{
    		a[k]=left[i];
    		i++;
		}
		else
		{
			a[k]=right[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		a[k]=left[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k]=right[j];
		j++;
		k++;
	}
	

}
void merge(int a[],int beg,int end)
{ 
int mid;
	if(beg<end)
	{
	mid=(beg+end)/2;
	merge(a,beg,mid);
	merge(a,mid+1,end);
	mergesort(a,beg,mid,end);	
	}
}
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
int main()
{
	int n,a[10],i;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge(a,0,n-1);
	print(a,n);
}
