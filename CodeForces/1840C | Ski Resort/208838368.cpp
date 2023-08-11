#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
int t;
cin>>t;
while(t--){
    int n,k,q;
    cin>>n>>k>>q;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int cur=0;
    ll ans=0;
    for (int i = 0; i < n; ++i) {
        if(a[i]<=q){
            cur++;
        }
        else{
            if(cur>=k){
                ans+=(cur-k+1)*1LL*(cur-k+2)/2;
            }
            cur=0;
        }
    }
    if(cur>=k){
        ans+=(cur-k+1)*1LL*(cur-k+2)/2;
    }
    cout<<ans<<endl;
}
}