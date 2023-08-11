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
const int N=2e5+5;
int n;
ll a[N];
ll mem[N][3];
ll dp(int i,int s){
    if(i==n-1) {
        if(s==0)
            return mem[i][s]=a[i];
        else
            return mem[i][s]=-a[i];
    }
    if(mem[i][s]!=-1)
        return mem[i][s];
    if(s==0)
    return mem[i][s]=max(dp(i+1,0)+a[i],dp(i+1,1)-a[i]);
    else
        return mem[i][s]=max(dp(i+1,0)-a[i],dp(i+1,1)+a[i]);
 
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
  int t;
  cin>>t;
  while(t--){
      cin>>n;
      for (int i = 0; i < n; ++i) {
          cin>>a[i];
      }
      memset(mem,-1,(n+1)*sizeof mem[0]);
      cout<<dp(0,0)<<nl;
  }
}