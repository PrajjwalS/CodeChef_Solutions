#include<iostream>
#include<string>
using namespace std;
#define lli long long int
int main()
{
     ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  int t;
  cin>>t;
  while(t--)
  { lli a[6]={};
    lli N;
    cin>>N;
    lli cCount=0;
    lli eCount=0;

    for(lli i=0;i<N;i++)
    {
      string str;
      cin>>str;
      lli j=0;
      while(str[j]!='\0')
      {


        if(str[j]=='c')
          { if(cCount==0)
              cCount=1;
            else
              {
                a[0]++;
                cCount=0;
              }
          }
        else if(str[j]=='o')
          a[1]++;
        else if(str[j]=='d')
          a[2]++;
        else if(str[j]=='e')
        { if(eCount==0)
            eCount=1;
          else
            {
              a[3]++;
              eCount=0;
            }
        }
        else if(str[j]=='h')
          a[4]++;
        else if(str[j]=='f')
          a[5]++;


        j++;
      }
    }
    int least=a[0];
    for(int k=0;k<6;k++)
    {
      if(a[k]<least)
        least=a[k];
    }
    cout<<least<<endl;

  }
return 0;
}
