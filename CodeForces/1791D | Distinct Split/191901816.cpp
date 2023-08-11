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
      int n;
      cin>>n;
      string s;
      cin>>s;
      int pre[n+1],suf[n+1];
      set<char>s1,s2;
      pre[0]=0;
      for (int i = 0; i < n; ++i) {
          s1.insert(s[i]);
          pre[i+1]=s1.size();
      }
      suf[0 ]=0;
      for (int i = n; i >0 ; --i) {
          s2.insert(s[i-1]);
          suf[i]=s2.size();
      }
      int ans=0;
      for (int i = 1; i < n; ++i) {
          ans=max(ans,pre[i]+suf[i+1]);
      }
      cout<<ans<<nl;
  }
}