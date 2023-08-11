#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl = '\n';
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD =1e9+7;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    string p="3141592653589793238462643383279";
    while(t--){
     int n,s,r;
     cin>>n>>s>>r;
     int mx=s-r;
      int a[n];
      if(n==2)
      {
          a[0]=r;
          a[1]=mx;
      }
      else {
          int k = r / (n - 1);
          int x=r%(n-1);
          for (int i = 0; i < n-1; ++i) {
              a[i]=k;
          }
          for (int i = 0; i < x; ++i) {
              a[i]+=1;
          }
          a[n-1]=mx;
      }
        for (int i = 0; i < n; ++i) {
            cout<<a[i]<<" ";
        }
        cout<<nl;
 
    }
}