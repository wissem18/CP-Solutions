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
    int n,m,k;
    cin>>n>>m>>k;
    vector<bool> ishole(n+1, false);
    for (int i = 0; i < m; ++i) {
        int x;
        cin>>x;
        ishole[x]=true;
    }
    int ans=1;
    bool down=ishole[1];
    for (int i = 0; i < k; ++i) {
        int u,v;
        cin>>u>>v;
        if(u==ans){
            if(!down)
            ans=v;
            if(ishole[v])
                down= true;
        }
      else if(v==ans){
            if(!down)
                ans=u;
            if(ishole[u])
                down= true;
        }
    }
    cout<<ans;
}
 