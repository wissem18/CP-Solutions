#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int MOD = 1e9+7;
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
ll modInverse(ll a, ll p)
{
    return binpow(a, p - 2, p);
}
ll c[31][31];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
 
    c[1][1] = 1;
    c[1][0] = 1;
    for (int i = 2; i <31; i++) {
        c[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
        }
    }
    int n,m,t;
    cin>>n>>m>>t;
    ll ans=0;
    for (int i = 4; i <=n ; ++i) {
        if(i>=t)
            break;
        int j=t-i;
        if(j>m)
            continue;
        ans+=c[n][i]*c[m][j];
 
    }
    cout<<ans;
}