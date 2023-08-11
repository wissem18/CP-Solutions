#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
void dfs(int node,int parent,vector<vector<int>>&graph, vector<bool>&vis, vector<int>&cnt)
{
    cnt[node] = 0;
    vis[node] = true;
    for (auto c : graph[node]) {
        if (!vis[c]) {
            dfs(c,node,graph,vis,cnt);
            cnt[node] += cnt[c];
        }
    }
 
    if (graph[node].size()==1&&graph[node][0]==parent)
        cnt[node] = 1;
}
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
        vector<vector<int>>graph(n);
        vector<bool>vis(n,false);
        vector<int>cnt(n,0);
        for (int i = 0; i < n-1; ++i) {
          int u,v;
          cin>>u>>v;
          u--,v--;
          graph[u].push_back(v);
          graph[v].push_back(u);
        }
        for (int i = 0; i < n; ++i) {
            vis[i]=false;
            cnt[i]=0;
        }
        dfs(0,-1,graph,vis,cnt);
        int q;
        cin>>q;
        while(q--){
             int x,y;
             cin>>x>>y;
             x--,y--;
             ll ans=cnt[x]*1LL*cnt[y];
             cout<<ans<<endl;
        }
    }
  }