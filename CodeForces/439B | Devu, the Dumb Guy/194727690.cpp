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
    int n,x;
    cin>>n>>x;
    int c[n];
    for (int i = 0; i < n; ++i) {
        cin>>c[i];
    }
    sort(c,c+n);
    ll ans=0;
    for (int i = 0; i < n; ++i) {
        ans+=1LL*x*c[i];
        if(x>1)
            x--;
    }
    cout<<ans<<nl;
    }