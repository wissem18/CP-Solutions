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
      if(n==3)
          cout<<"NO"<<nl;
      else{
          cout<<"YES"<<nl;
          if(n%2==0){
          for (int i = 0; i < n; ++i) {
              if(i%2)
                  cout<<-1<<" ";
              else
                  cout<<1<<" ";
          }
          cout<<nl;
          }
          else{
              for (int i = 0; i < n; ++i) {
                  if(i%2)
                      cout<<-n/2<<" ";
                  else
                      cout<<n/2-1<<" ";
              }
              cout<<nl;
          }
      }
  }
}