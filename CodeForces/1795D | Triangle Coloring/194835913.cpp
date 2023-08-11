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
 
ll modFact(ll n, ll p)
{
    if (n >= p)
        return 0;
 
    ll result = 1;
    for (ll i = 1; i <= n; i++)
        result = (result * i) % p;
 
    return result;
}
ll modInverse(ll a, ll p)
{
    return binpow(a, p - 2, p);
}
ll C(ll n,ll k,ll p){
    return (modFact(n,p)* modInverse(modFact(k,p)*modFact(n-k,p),p))%p;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
 
     int n;
     cin>>n;
     ll ans=C(n/3,n/6,MOD);
        for (int i = 0; i <n/3 ; ++i) {
            vector<int>a;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin>>x;
                a.push_back(x);
            }
            sort(a.begin(),a.end());
            if(a[0]==a[2])
                ans=(ans*3)%MOD;
            else if(a[0]==a[1])
                ans=(ans*2)%MOD;
        }
        cout<<ans<<nl;
    }
 