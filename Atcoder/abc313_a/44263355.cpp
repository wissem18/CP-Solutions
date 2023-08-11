#include "bits/stdc++.h"

using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
double const pi = 3.141592653;
vector<int> dx = {0, 1, 0, -1};
vector<int> dy = {1, 0, -1, 0};
int MOD = 1e9 + 7;
int ans=0;
vector<int>mx;
void dfs(int root,int d,  vector<vector<int>> &graph){
d=max(mx[root],d);
if(d>=0)
    ans++;
    for (auto x:graph[root]) {
      dfs(x,d-1,graph);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n + 1);
    for (int i = 2; i <= n; ++i) {
        int u;
        cin >> u;
        graph[u].push_back(i);
    }
    mx.assign(n+1,-1);
    for (int i = 0; i < m; ++i) {
        int x,y;
        cin>>x>>y;
        mx[x]=max(mx[x],y);
    }
    dfs(1,mx[1],graph);
    cout<<ans<<endl;
}

