#include<stdio.h>
void merge(int a[],int beg,int mid,int end)
{
	int i,j,k;
	int n1=mid-beg+1;
	int n2=end-mid;
	int left[n1],right[n2];
	for(i=0;i<n1;i++)
	{
		left[i]=a[beg+i];
    }
    for(j=0;j<n2;j++)
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
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
void mergesort(int a[],int beg,int end)
{
	if(beg<end)
	{
	 int mid=(beg+end)/2;
	mergesort(a,beg,mid);
	mergesort(a,mid+1,end);
	merge(a,beg,mid,end);
   }
}
int main()
{
	int n,a[10],i,beg,end;
	printf("enterr the number:");
	scanf("%d",&n);
	printf("entert the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	beg=0;
	end=n-1;
	mergesort(a,beg,end);
	display(a,n);
}
