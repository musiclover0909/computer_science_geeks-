#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ll                    long long int
#define ull                   unsigned long long int
#define loop(i,a,b)          for(ll i=(ll)a;i<=(ll)b;i++)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define f                     first
#define s                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define vi                    vector<int>
#define vl                    vector<ll>
#define vvi                   vector<vi>
#define vvl                   vector<vl>
#define pll                   pair<ll,ll>
#define vpl                   vector<pll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
const int mod = 1000000007;
#define sv()                  long long int t; cin>>t; while(t--)
const int req=100005;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   ll t;
   cin >> t;
   for(ll o=1;o<=t;o++)
  {
      ll i,j,k,n;
      ll m;
      cin >> n >> m;
      string s[m+5];
      for(i=0;i<n;i++)
      {
          cin >> s[i];
      }
      ll flag1=1,flag2=1;
      for(i=0;i<n;i++)
      {
          for(j=0;j<m;j++)
          {
              if((i+j)%2)
              {
                  if(s[i][j]=='R')
                  flag2=0;
                  if(s[i][j]=='W')
                  flag1=0;
              }
              else{
                   if(s[i][j]=='W')
                  flag2=0;
                  if(s[i][j]=='R')
                  flag1=0;
              }
          }
      }
     // cout << flag1 << " " << flag2 << endl;
      if(!(flag1) && !(flag2))
      cout << "NO" << endl;
      else{
          cout << "YES" << endl;
          if(flag1)
          {
              for(i=0;i<n;i++)
              {
                  for(j=0;j<m;j++)
                  {
                      if((i+j)%2)
                      {
                          cout << "R";
                      }
                      else{
                          cout << "W";
                      }
                      
                  }
                  cout << endl;
              }
          }
          else{
               for(i=0;i<n;i++)
              {
                  for(j=0;j<m;j++)
                  {
                      if((i+j)%2==0)
                      {
                          cout << "R";
                      }
                      else{
                          cout << "W";
                      }
                      
                  }
                  cout << endl;
              }
          }
      }
      
  }
}
