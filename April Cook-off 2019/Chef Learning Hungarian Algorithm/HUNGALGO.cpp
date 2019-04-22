#include<iostream>

using namespace std;
#define lli long long int
int main()
{
     ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

     lli t;
     cin>>t;
     while(t--)
     { int ans=0;
       lli n;
       cin>>n;
        lli a[n][n];
        for(lli i=0;i<n;i++)
         for(lli j=0;j<n;j++)
          cin>>a[i][j];
       for(lli i=0;i<n;i++)
        { ans=0;
          for(lli j=0;j<n;j++)
          {
            if(a[i][j]==0)
            {
              ans=1;
              break;
            }
          }
          if(ans!=1)
          {
            cout<<"NO"<<endl;
            break;
          }
        }
        // now checking columns
        if(ans==1)
        {
          for(lli j=0;j<n;j++)
          { ans=0;
            for(lli i=0;i<n;i++)
              {
                if(a[i][j]==0)
                  {ans=1;
                    break;
                  }
              }
              if(ans!=1)
              {
                cout<<"No"<<endl;
                break;
              }
          }
          if(ans==1)
          cout<<"YES"<<endl;
        }
     }
     return 0;
}
