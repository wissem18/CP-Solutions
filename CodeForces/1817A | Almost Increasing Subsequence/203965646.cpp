#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int MOD = 998244353;
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
   int n,q;
   cin>>n>>q;
   int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    vector<int>pre(n+1,0);
    for (int i = 2; i <n ; ++i) {
     if(a[i-2]>=a[i-1]&&a[i-1]>=a[i])
         pre[i-1]=1;
    }
    for (int i = 1; i <=n ; ++i) {
        pre[i]+=pre[i-1];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        if(r-l+1<=2)
            cout<<r-l+1<<endl;
        else{
        int ans=r-l+1-(pre[r-2]-pre[l-1]);
        cout<<ans<<endl;
        }
    }
}