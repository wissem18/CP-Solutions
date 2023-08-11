#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, -1, -1, 1, 1, 1};
int dy[] = {-1, 1, 0, -1, 1, -1, 1, 0};
int MOD = 1e9 + 7;
vector<vector<pair<int,int>>>graph;
vector<bool> vis;
 
int dfs(int u,int ind){
    vis[u]=true;
    int ans=1;
    for (auto v:graph[u]) {
       if(!vis[v.first]){
           int cur=dfs(v.first,v.second);
           ans=max(ans,cur+(v.second<ind));
       }
    }
    return ans;
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
        cin >> n;
        graph.clear();
        graph.resize(n+1);
        for (int i = 0; i < n-1; ++i) {
            int u,v;
            cin>>u>>v;
            graph[u].push_back({v,i});
            graph[v].push_back({u,i});
        }
        vis.clear();
         vis.assign(n+1, false);
 
 
        cout<<dfs(1,0)<<endl;
    }
}