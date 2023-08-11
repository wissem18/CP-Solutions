#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl = '\n';
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 998244353;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
      int n;
      cin>>n;
      ll ans=0;
      priority_queue<int>q;
      while(n--){
          int x;cin>>x;
          if(x==0){
              if(!q.empty()){
                  ans+=q.top();
                  q.pop();
              }
          }
          else
              q.push(x);
      }
      cout<<ans<<nl;
    }
}
 