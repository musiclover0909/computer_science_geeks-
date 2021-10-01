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
      ll n;
      cin >> n;
      ll i,j,k;
      vl arr(n);
      for(i=0;i<n;i++)
      cin >> arr[i];
      sort(arr.begin(),arr.end());
      ll ind1=0;
      ll min_diff=arr[1]-arr[0];
      for(i=1;i<n;i++)
      {
          if(arr[i]-arr[i-1]<min_diff)
          {
              min_diff=arr[i]-arr[i-1];
              ind1=i-1;
          }
      }
      if(n==2)
      {
        for(i=0;i<n;i++)
      cout << arr[i] << " ";
      }
      else{
      for(i=ind1+1;i<n;i++)
      cout << arr[i] << " ";
      for(i=0;i<=ind1;i++)
      cout << arr[i] << " ";
      }
     
      cout << endl;
      
  }
}
