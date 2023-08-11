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
    int n;
    cin>>n;
       map<int,int>diag1,diag2;
      for (int i = 0; i < n; ++i) {
          int x,y;
          cin>>x>>y;
          diag1[x+y]++;
          diag2[x-y]++;
      }
      ll ans=0;
      for (auto x:diag1) {
           ans+=x.second*(x.second-1)/2;
      }
      for (auto x:diag2) {
          ans+=x.second*(x.second-1)/2;
      }
      cout<<ans;
}