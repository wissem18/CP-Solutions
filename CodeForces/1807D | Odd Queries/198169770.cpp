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
int n,q;
cin>>n>>q;
int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    ll pre[n+1];
    pre[0]=0;
    for (int i = 0; i < n; ++i) {
        pre[i+1]=pre[i]+a[i];
    }
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        ll s=pre[l-1]+pre[n]-pre[r]+(r-l+1)*k*1LL;
        if(s%2)
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
    }
}
}