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
      ll n,m,indi,indj,k;
      cin >> n >> m >> indi >> indj;
      ll pos[5][2];
      pos[1][0]=n;
      pos[1][1]=1;
      pos[2][0]=n;
      pos[2][1]=m;
      pos[3][0]=1;
      pos[3][1]=m;
      pos[4][0]=1;
      pos[4][1]=1;
      ll i,j;
      ll ans=-1,ind1,ind2;
      for(i=1;i<=4;i++)
      {
          for(j=1;j<=4;j++)
          {
              ll temp=0;
              temp+=abs(indi-pos[i][0])+abs(indj-pos[i][1]);
              temp+=abs(indi-pos[j][0])+abs(indj-pos[j][1]);
              temp+=abs(pos[j][0]-pos[i][0])+abs(pos[j][1]-pos[i][1]);
              if(temp>ans)
              {
                  ans=temp;
                  ind1=i;
                  ind2=j;
              }
          }
      }
      cout << pos[ind1][0] << " " << pos[ind1][1] << " ";
      cout << pos[ind2][0] << " " << pos[ind2][1] << endl;
      
      
  }
}
