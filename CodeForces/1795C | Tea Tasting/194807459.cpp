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
     int n;
     cin>>n;
     ll a[n],b[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin>>b[i];
        }
        ll pre[n+1];
        pre[0]=0;
        for (int i = 0; i < n; ++i) {
            pre[i+1]=pre[i]+b[i];
        }
        int j=n;
        vector<ll>ans(n+2,0);
        vector<ll>add(n+1,0);
        for (int i = 0; i < n; ++i) {
            int x= upper_bound(pre,pre+1+n,a[i]+pre[i])-pre;
            if(x==n+1)
                x--;
            add[x]+=min(b[x-1],a[i]+pre[i]-pre[x-1]);
            ans[n-j+1]++;
            ans[x]--;
          j--;
        }
        for (int i = 1; i <=n ; ++i) {
            ans[i]+=ans[i-1];
        }
        for (int i = 1; i <=n ; ++i) {
            ans[i]=(ans[i]*b[i-1])+add[i];
        }
        for (int i = 0; i < n; ++i) {
            cout<<ans[i+1]<<" ";
        }
        cout<<nl;
    }
}