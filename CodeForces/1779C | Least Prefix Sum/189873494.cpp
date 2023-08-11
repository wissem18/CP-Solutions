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
      int  n,m;
      cin>>n>>m;
      m--;
      ll a[n];
      for (int i = 0; i < n; ++i) {
          cin>>a[i];
      }
      priority_queue<int>pq;
      int ans=0;
      ll dif=0;
      for (int i = m; i >0 ; --i) {
          if(a[i]>0)
          pq.push(a[i]);
          dif+=a[i];
          while(dif>0){
              int x=pq.top();
              pq.pop();
              dif-=2*x;
              ans++;
          }
      }
      while(!pq.empty())
          pq.pop();
      dif=0;
      for (int i = m+1; i <n ; ++i) {
          if(a[i]<0)
              pq.push(-a[i]);
          dif+=a[i];
          while(dif<0){
              int x=pq.top();
              pq.pop();
              dif+=2*x;
              ans++;
          }
      }
      cout<<ans<<nl;
  }
}