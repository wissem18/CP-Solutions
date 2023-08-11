#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, -1, -1, 1, 1, 1};
int dy[] = {-1, 1, 0, -1, 1, -1, 1, 0};
int MOD = 1e9 + 7;
 
ll binpow(ll a, ll b, ll m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a )% m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
  ll n,m;
  cin>>n>>m;
  ll ans=( binpow(3,n,m)-1+m)%m;
  cout<<ans;
}