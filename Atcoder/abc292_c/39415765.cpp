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
int divs(int x){
    int ans=0;
    for (int i = 1; i*i<=x ; ++i) {
      if(x%i==0){
          ans+=2;
          if(i==x/i)
              ans--;
      }
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     ll ans=0;
        for (int i = 1; i < n; ++i) {
           int x=i,y=n-i;
           ans+=divs(x)* divs(y);
        }
        cout<<ans<<nl;
    }
}
