#include "bits/stdc++.h"

using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
double const pi = 3.141592653;
vector<int> dx = {0, 1, 0, -1};
vector<int> dy = {1, 0, -1, 0};
int MOD = 1e9 + 7;
const int N=3*1e5+5;
vector<int>graph[N];
bool vis[N];
int bfs(int p){
    vis[p]=true;
    queue<pair<int,int>> qu;
    qu.push({p,0});
    int ans=0;
    while(!qu.empty()){
        int x=qu.front().first;
        int d=qu.front().second;
        qu.pop();
        ans=max(ans,d);
        for (int i = 0; i < graph[x].size(); ++i) {
            int y=graph[x][i];
            if(!vis[y]){
                vis[y]=true;
                qu.push({y,d+1});
            }
        }
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
int n1,n2,m;
cin>>n1>>n2>>m;
    for (int i = 0; i < m; ++i) {
        int u,v;
        cin>>u>>v;
      graph[u].push_back(v);
      graph[v].push_back(u);
    }
    int ans=bfs(1)+bfs(n1+n2);
    cout<<ans+1<<endl;
}

