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
const int N=4*1e5+5;
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
//ll modFact(ll n, ll p)
//{
//    if (n >= p)
//        return 0;
//
//    ll result = 1;
//    for (ll i = 1; i <= n; i++)
//        result = (result * i) % p;
//
//    return result;
//}
ll modfact[N];
ll modInverse(ll a, ll p)
{
    return binpow(a, p - 2, p);
}
ll C(ll n,ll k,ll p){
    return (modfact[n]* modInverse(modfact[k]*modfact[n-k],p))%p;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    modfact[0]=1;
    for (int i = 1; i <=N; ++i) {
        modfact[i]=(modfact[i-1]*i)%MOD;
    }
    int n,k;
    cin>>n>>k;
    bool vis[N];
    memset(vis,false,sizeof vis);
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        vis[x]=true;
    }
   if(!vis[0])
       k--;
   vis[0]= true;
   ll ans=1;
   int mx=0;
   int i=1;
   while(i<=k){
       while(vis[mx])
           mx++;
       vis[mx]=true;
       ans=(ans+C(k-i+mx,mx-1,MOD))%MOD;
       i++;
   }
   cout<<ans<<nl;
}