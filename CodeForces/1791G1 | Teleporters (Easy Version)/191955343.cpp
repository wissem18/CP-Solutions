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
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
  int t;
  cin>>t;
  while(t--){
   int n,c;
   cin>>n>>c;
   int a[n];
      for (int i = 0; i < n; ++i) {
          cin>>a[i];
      }
      for (int i = 0; i < n; ++i) {
          a[i]+=(i+1);
      }
      sort(a,a+n);
      int s=0;
      int ans=0;
      for (int i = 0; i < n; ++i) {
          s+=a[i];
          if(s<=c){
              ans++;
          }
          else{
              break;
          }
      }
      cout<<ans<<nl;
  }
}