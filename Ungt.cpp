#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,p,n,inp,inp1;
	int num_states,num_input,num_final;
	int symbol[5],final_state[5];
	int flag,mat[10][10][10],present_state[10],prev_trans;
	int next_state[20],new_trans;
	char ch,input[10];
	printf("how many state are used:");
	scanf("%d",&num_states);
	printf("how many input symbols:");
	scanf("%d",&num_input);
	for(i=0;i<num_input;i++)
	{
		printf("enter the %d input symbol:",i+1);
		scanf("%d",&symbol[i]);
	}
	printf("how many final states are used:");
	scanf("%d",&num_final);
	for(i=0;i<num_final;i++)
	{
		printf("enter the %d final state:",i+1);
		scanf("%d",&final_state[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			for(k=0;k<10;k++)
			{
				mat[i][j][k]=-1;
			}
		}
	}
	for(i=0;i<num_states;i++)
	{
		for(j=0;j<num_input;j++)
		{
			printf("how many transistion from state %d to the input %d:",i,symbol[j]);
			scanf("%d",&n);
			for(k=0;k<n;k++)
			{
				printf("enter the transistion %d from state %d for the input %d:",k+1,i,symbol[j]);
				scanf("%d",&mat[i][j][k]);
			}
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			for(k=0;k<10;k++)
			{
				if(mat[i][j][k]!=-1)
				printf("mat[%d][%d][%d]=%d\n",i,j,k,mat[i][j][k]);
			}
		}
	}
	while(1)
	{
		printf("enter the string :");
		scanf("%s",input);
		l=strlen(input);
		present_state[0]=0;
		prev_trans=1;
		for(i=0;i<l;i++)
		{
			if(input[i]=='0')
			{
			inp1=0;
	     	}
		else  if(input[i]=='1'){
		inp1=1;
	}
		else
	{
		printf("invalid string:");
	int	exit(0);
     }
    
		for(m=0;m<num_input;m++)
		{
			if(inp1==symbol[m])
			{
			inp=m;
			printf("%d",inp);
			break;
		   }
		}
		new_trans=0;
		for(j=0;j<prev_trans;j++)
		{
			k=0;
			p=present_state[j];
			while(mat[p][inp][k]!=-1)
			{
				next_state[new_trans++]=mat[p][inp][k];
				k++;
			}
		}
			for(j=0;j<new_trans;j++)
			{
				present_state[j]=next_state[j];
			}
			prev_trans=new_trans;
		}
		flag=0;
		for(i=0;i<prev_trans;i++)
		{
			for(j=0;j<num_final;j++)
			{
				if(present_state[i]==final_state[j])
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==1)
		{
			printf("accept\n");
		}
		else
		{
			printf("\nstring not accept");
		}
		
	}
}

	

