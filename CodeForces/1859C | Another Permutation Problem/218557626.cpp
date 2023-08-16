 
#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
double const pi = 3.141592653;
vector<int> dx = {0, 1, 0, -1};
vector<int> dy = {1, 0, -1, 0};
int MOD = 1e9 + 7;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    ll ans=0;
    int test=0;
    for (int i = 1; i <=n ; ++i) {
      ll cur=0,mx=0;
        for (ll j = 1; j <i ; ++j) {
            cur+=j*j;
            mx=max(mx,j*j);
        }
        for (ll j = i,k=n; j <=n ; ++j,k--) {
            cur+=j*k;
            mx=max(mx,j*k);
        }
        if(ans<cur-mx)
            test=i;
        ans=max(ans,cur-mx);
    }
    cout<<ans<<endl;
}
}
 
 
 