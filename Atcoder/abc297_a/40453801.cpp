#include "bits/stdc++.h"

using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
   ll n,m;
    cin>>n>>m;
    ll mx=1e6;
 ll ans=1e18;
    for (int i = 1;  i<=min(mx,n) ; ++i) {
        ll x=(m+i-1)/i;
        if(x<=n){
            ans=min(x*i,ans);
        }
    }
    if(ans==1e18)
        cout<<-1;
    else
        cout<<ans;
}