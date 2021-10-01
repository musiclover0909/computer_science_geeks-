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
    if(n%2)
      cout << "Bob" << endl;
      else{
          ll k=log2(n);
          if(k%2==1 && pow(2,k)==n)
          {
              cout << "Bob" << endl;
          }
          else
          cout << "Alice" << endl;
      }
  }
}
