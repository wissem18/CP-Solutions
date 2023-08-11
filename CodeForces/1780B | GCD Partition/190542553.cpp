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
        int n;
        cin>>n;
        int a[n];
        ll pre[n+1];
        pre[0]=0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            pre[i+1]=pre[i]+a[i];
        }
        ll ans=1;
        for (int i = 1; i <n ; ++i) {
            ans=max(ans,__gcd(pre[i],pre[n]-pre[i]));
        }
        cout<<ans<<nl;
    }
}