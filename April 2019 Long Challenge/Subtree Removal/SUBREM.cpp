#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
#define lli long long int
#define MAX 100001
vector <lli> g[MAX];
lli val[MAX]={};
lli X;

lli res_dfs(lli node, lli parent)
{
  lli z=0;
  for(lli i=0;i<g[node].size();i++)
    {
      if(g[node][i]!=parent)
        z+=res_dfs(g[node][i],node);
    }
    return max(val[node]+z,-X);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
      lli N;
      cin>>N>>X;


      for(int i=1;i<=N;i++)
       {
         g[i].clear();
         val[i]=0;
       }
      for(int i=1;i<=N;i++)
        cin>>val[i];

      for(int i=1;i<=N-1;i++)
       {
          lli a,b;
          cin>>a>>b;
          g[a].push_back(b);
          g[b].push_back(a);
       }
      cout<<res_dfs(1,1)<<endl;
    }
}
