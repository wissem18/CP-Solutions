#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl = '\n';
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
  int t;
  cin>>t;
  while(t--){
      ll a,b;
      cin>>a>>b;
      ll n,m;
      cin>>n>>m;
      ll x=min((n/(m+1))*m*a,(n/(m+1))*(m+1)*b)+(n-(n/(m+1))*(m+1))*min(a,b);
      cout<<x<<nl;
  }
 
}