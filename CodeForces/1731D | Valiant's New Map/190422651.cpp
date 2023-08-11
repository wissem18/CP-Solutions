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
int n,m;
bool ok(vector<vector<int>>a,int mid){
    vector<vector<int>>pre(n+1,vector<int>(m+1,0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            a[i][j]=a[i][j]>=mid;
        }
    }
    for (int i = 1; i <=n ; ++i) {
        for (int j = 1; j <=m ; ++j) {
            pre[i][j]=pre[i][j-1]+pre[i-1][j]-pre[i-1][j-1]+a[i-1][j-1];
        }
    }
    for (int i = mid; i <=n ; ++i) {
        for (int j = mid; j <=m ; ++j) {
            int x=pre[i][j]-pre[i-mid][j]-pre[i][j-mid]+pre[i-mid][j-mid];
            if(x==mid*mid)//all elements equal to 1 => (>=mid)
                return true;
        }
    }
    return false;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<vector<int>> a(n,vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin>>a[i][j];
            }
        }
        int l=1,r=min(n,m);
        int ans=0;
        while(l<=r){
            int mid=(l+r)/2;
            if(ok(a,mid)){
                ans=mid;
                l=mid+1;
            }
            else
                r=mid-1;
        }
        cout<<ans<<nl;
    }
}