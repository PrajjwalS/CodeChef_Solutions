#include<iostream>
#include<map>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int N,M,K,total=0;
		cin>>N>>M>>K;
	
		map< pair<long long int,long long int>, long long int > m;
		while(K--)
		{
			long long int x,y;
			cin>>x>>y;
			
			m[{x,y}]=1;
		}

		map< pair<long long int,long long int> ,long long int>::iterator it;
		for(it=m.begin();it!=m.end();it++)
		{
			long long int xx=(it->first).first;
			long long int yy=(it->first).second;

			if(!m.count({xx,yy+1}))
				total++;
			if(!m.count({xx,yy-1}))
				total++;
			if(!m.count({xx+1,yy}))
				total++;
			if(!m.count({xx-1,yy}))
				total++;
		}
		cout<<total<<endl;
		
		m.clear();
	}
}