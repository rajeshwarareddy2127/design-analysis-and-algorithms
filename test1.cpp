#include<stdio.h>
int main()
{
	int i,j,wt[10],pt[10],ra[10];
	int cap,n,temp,total=0;
	printf("enter the number of list:");
	scanf("%d",&n);
	printf("enter the number object weigth:\n");
	for(i=0;i<n;i++)
	{
		printf("enter the weigth %d and profit[%d]:",i);
		scanf("%d %d",&wt[i],&pt[i]);
	}
	printf("enter the capacity:");
	scanf("%d",&cap);
	for(i=0;i<n;i++)
	{
		ra[i]=pt[i]/wt[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(ra[i]<ra[j])
		{
			temp=ra[j];
			ra[j]=ra[i];
			ra[i]=temp;
			
			temp=wt[j];
			wt[j]=wt[i];
			wt[i]=temp;
			
			temp=pt[j];
			pt[j]=pt[i];
			pt[i]=temp;
		}
	}
}
	for(i=0;i<n;i++)
	{
		if(wt[i]>cap)
		{
			break;
		}
		else
		{
			total+=pt[i];
			cap-=wt[i];
		}
	}
		if(i<n)
		{
			total=total+(ra[i]*cap);
			printf("tatal=%d",total);
		}
	
}

