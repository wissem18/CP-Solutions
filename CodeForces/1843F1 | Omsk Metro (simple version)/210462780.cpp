#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
 
bool ok(int mid, int &n, vector<int> &queries, vector<pair<int, int>> &a) {
    vector<int> pre(n + 1, 0);
    for (int i = 0; i < mid; ++i) {
        pre[queries[i]] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        pre[i] += pre[i - 1];
    }
    for (int i = 0; i < a.size(); ++i) {
        int l = a[i].first;
        int r = a[i].second;
        if ((r - l + 1) / 2 < pre[r] - pre[l - 1])
            return true;
    }
    return false;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int cur=1;
        vector<int>d(n+5),mxd(n+5),mnd(n+5),mn(n+5),mx(n+5);
        d[1]=1;
        mxd[1]=1;
        mnd[1]=0;
        mn[1]=1;
        mx[1]=1;
        while(n--){
         char c;
         cin>>c;
         if(c=='?'){
           int x,y,k;
           cin>>x>>y>>k;
           if(k<=mxd[y]&&k>=mnd[y])
               cout<<"YES"<<endl;
           else
               cout<<"NO"<<endl;
         }
         else{
             int x,y;
             cin>>x>>y;
             cur++;
             mn[cur]=min(mn[x]+y,y);
             mx[cur]=max(mx[x]+y,y);
             d[cur]=d[x]+y;
             mxd[cur]=max({mxd[x],d[x]+y,mx[cur]});
             mnd[cur]=min({mnd[x],d[x]+y,mn[cur]});
         }
        }
    }
}