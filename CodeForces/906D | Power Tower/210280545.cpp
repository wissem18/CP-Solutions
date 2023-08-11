#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
map<ll, ll> mp;
ll phi(ll n) {
    if(mp.count(n))
        return mp[n];
    ll result = n;
    ll x=n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    mp[x]=result;
    return mp[x];
}
inline ll MoD(ll x, ll m) {
    if (x < m) return x;
    return x % m + m;
}
ll power(ll n, ll k, ll mod) {
    ll ans = MoD(1, mod);
    while (k) {
        if (k & 1) ans = MoD(ans * n, mod);
        n = MoD(n * n, mod);
        k >>= 1;
    }
    return ans;
}
const int N=1e5+5;
int a[N];
// if x >= log2(m), then a^x = a^(MOD(x, phi(m))) % m
ll query(ll l, ll r, ll m) {
    if (l == r) return MoD(a[l], m);
    if (m == 1) return 1;
    return power(a[l], query(l + 1, r, phi(m)), m);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
  ll n,m;
  cin>>n>>m;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        l--,r--;
      cout<<query(l,r,m)%m<<endl;
    }
}