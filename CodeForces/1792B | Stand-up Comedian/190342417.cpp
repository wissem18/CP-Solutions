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
    while(t--){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==0)
        cout<<1<<nl;
    else {
        ll ans = a;
        ans+=2*min(b,c);
        int v=min(b,c);
        b-=v;
        c-=v;
        ll x=b+c+d;
        ans+=min(a+1,x);
        cout<<ans<<nl;
    }
    }
}