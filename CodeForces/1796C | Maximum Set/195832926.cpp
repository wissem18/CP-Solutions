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
int t;
cin>>t;
 
while(t--){
    int l,r;
    cin>>l>>r;
    int mx=log2(r*1.0/l);
    mx++;
    ll ans=r/(1<<mx-1)-l+1;
    if(mx>=2){
        if(r/((1<<(mx-2))*3)>=l)
        ans=(ans+(r/((1<<(mx-2))*3)-l+1)*(mx-1))%MOD;
    }
    cout<<mx<<" "<<ans<<nl;
}
}