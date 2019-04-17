#include<stdio.h>
#include <stdlib.h>

int main()
{	
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int N,M,K;
		scanf("%lld %lld %lld",&N,&M,&K);
		long long int i,j;
		int *field[N]; 
			for(i=0;i<N;i++)
			field[i]=(int*)calloc(M,sizeof(int));
		
		for(i=0;i<K;i++)
		{
			long long int r,c;
			scanf("%lld %lld",&r,&c);
			field[r-1][c-1]=1;
		}
		long long int fenceLength=0;
		for(i=0;i<N;i++)
		{	for(j=0;j<M;j++)
			{
				if(field[i][j]==1)
				{
					if(i==0 || field[i-1][j]==0)
						fenceLength++;
					if(i==N-1 || field[i+1][j]==0)
						fenceLength++;
					if(j==0 || field[i][j-1]==0)
						fenceLength++;
					if(j==M-1 || field[i][j+1]==0)
						fenceLength++;
				}
			}
		}
		printf("%lld\n",fenceLength);
		fflush(stdout);
	
	}


	return 0;
}