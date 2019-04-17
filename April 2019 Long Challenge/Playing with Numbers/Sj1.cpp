#include<iostream>
#include<vector>
#include<map>
#define lli long long int
using namespace std;
vector <lli> G[100001];
lli V[100001];	
lli M[100001];
bool T[100001];

map <lli,lli> A;



lli GCD(lli a , lli b){
    if(b == 0)
        return a;
    else
        return GCD(b,a%b);
}
void DFS(lli i, lli gcdTillNow)
{
	if(T[i]==false)
	{	
		
		T[i]=true;
		gcdTillNow=GCD(gcdTillNow,V[i]);

		if(G[i].size()==1 && i!=1)// ie of leaf node
		{
			A[i]=M[i]-GCD(M[i],gcdTillNow);
		}
		else	// if not leaf node
		{
			for(lli j=0;j<G[i].size();j++)
			{
				DFS(G[i][j],gcdTillNow);
			}
		}	
	}

}
int main()#include<iostream>
#include<vector>
#include<map>
#define lli long long int
using namespace std;
vector <lli> G[100001];
lli V[100001];	
lli M[100001];
bool T[100001];

map <lli,lli> A;



lli GCD(lli a , lli b){
    if(b == 0)
        return a;
    else
        return GCD(b,a%b);
}
void DFS(lli i, lli gcdTillNow)
{
	if(T[i]==false)
	{	
		
		T[i]=true;
		gcdTillNow=GCD(gcdTillNow,V[i]);

		if(G[i].size()==1 && i!=1)// ie of leaf node
		{
			A[i]=M[i]-GCD(M[i],gcdTillNow);
		}
		else	// if not leaf node
		{
			for(lli j=0;j<G[i].size();j++)
			{
				DFS(G[i][j],gcdTillNow);
			}
		}	
	}

}
int main()
{	

	// Removing stdio sync here was important!!!!!!!
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	
		lli N;
		cin>>N;

		for(lli i=0;i<=N;i++)
			{
				G[i].clear();
			 	T[i]=false;
			 	V[i]=0;
				M[i]=0;	
			}
		A.clear();


		for(lli i=0;i<N-1;i++)
		{
			lli a,b;
			cin>>a>>b;
			G[a].push_back(b);
			G[b].push_back(a);
		}
		for(lli i=1;i<=N;i++)
			cin>>V[i];
		for(lli i=1;i<=N;i++)
			cin>>M[i];
		DFS(1,V[1]);

		// printing ANS

		map<lli,lli>::iterator it;
		for(it=A.begin();it!=A.end();it++)
		{
			cout<<it->second<<" ";	
		}
		cout<<endl;

	}
 return 0;	
}

{
	int t;
	cin>>t;
	while(t--)
	{
	
		lli N;
		cin>>N;

		for(lli i=0;i<=N;i++)
			{
				G[i].clear();
			 	T[i]=false;
			 	V[i]=0;
				M[i]=0;	
			}
		A.clear();


		for(lli i=0;i<N-1;i++)
		{
			lli a,b;
			cin>>a>>b;
			G[a].push_back(b);
			G[b].push_back(a);
		}
		for(lli i=1;i<=N;i++)
			cin>>V[i];
		for(lli i=1;i<=N;i++)
			cin>>M[i];
		DFS(1,V[1]);

		// printing ANS

		map<lli,lli>::iterator it;
		for(it=A.begin();it!=A.end();it++)
		{
			cout<<it->second<<" ";	
		}
		cout<<endl;

	}
 return 0;	
}
