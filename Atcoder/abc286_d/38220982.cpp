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
   int n;
   ll a,b;
   string s;
   cin>>n>>a>>b>>s;
   ll ans=LONG_LONG_MAX;
    for (ll i = 0; i < n; ++i) {
        string k="";
        ll x=i*a;
        for (int j = i; j < n; ++j) {
            k+=s[j];
        }
        for (int j = 0; j < i; ++j) {
            k+=s[j];
        }
        for (int j = 0; j < n/2; ++j) {
            if(k[j]!=k[n-1-j])
                x+=b;
        }
        ans=min(ans,x);
    }
    cout<<ans;
}