#include<stdio.h>
int main()
{
	
		int n;
		scanf("%d",&n);
		//long int seq[n];
		long int i;
		long int larger,large;
		scanf("%ld",&larger);
		scanf("%ld",&large);
		if(larger<large)
		{
			long int temp= larger;
			larger = large;
			large=temp;
		}
		for(i=0;i<n-2;i++)
			{	long int entered;
				scanf("%ld",&entered);
				
				if(entered>larger)
				{ 	
					large=larger;
					larger=entered;
				}
			}
			printf("%ld\n",large%larger);	
	
}