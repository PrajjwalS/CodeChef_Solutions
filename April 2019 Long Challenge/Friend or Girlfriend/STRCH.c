#include<stdio.h>
int main()
{
	int t;
		scanf("%d",&t);
	while(t--)
	{		
		int N;
		scanf("%d",&N);
		char str[N+1],chr;
		scanf("%s %c",&str,&chr);
		
		long count=0;
		long total=0;
		for(int i=0;i<N;i++)
		{
			if(str[i]!=chr)
			{	
				count++;
				
			}
			else
			{	
				total=total+(count*(count+1)/2);
				count=0;
			}
		}
		total=total+(count*(count+1)/2);
		
		printf("\n%d\n",((long)N*((long)N+1)/2)-total);
		fflush(stdout);
	
	}
}