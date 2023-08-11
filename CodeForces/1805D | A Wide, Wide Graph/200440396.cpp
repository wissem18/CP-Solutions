#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
const int N=1e5+5;
vector<int>adj[N];
int height[N];
int dist[N];
void dfsheight(int cur, int par)
{
    for (auto u : adj[cur]) {
        if (u != par) {
            dfsheight(u, cur);
            height[cur]= max(height[cur], height[u]);
        }
    }
    height[cur] += 1;
}
void dfsmaxd(int cur, int par)
{
    int max1 = 0;
    int max2 = 0;
    for (auto u : adj[cur]) {
 
        if (u != par) {
            if (height[u] >= max1) {
                max2 = max1;
                max1 = height[u];
            }
            else if (height[u] > max2) {
                max2 = height[u];
            }
        }
    }
 
    int sum = 0;
    for (auto u : adj[cur]) {
        if (u != par) {
 
            sum = ((max1 == height[u]) ? max2 : max1);
            if (max1 == height[u])
                dist[u]= 1 + max(1 + max2, dist[cur]);
            else
                dist[u]= 1 + max(1 + max1, dist[cur]);
 
            dfsmaxd(u, cur);
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
int n;
cin>>n;
    for (int i = 0; i < n-1; ++i) {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfsheight(1,0);
    dfsmaxd(1,0);
    vector<int>mxd(n+1);
    for (int i = 1; i <=n ; ++i) {
        mxd[i]=max(dist[i],height[i])-1;
    }
    sort(mxd.begin(),mxd.end());
    for (int i = 1; i <=n ; ++i) {
     int x= lower_bound(mxd.begin(),mxd.end(),i)-mxd.begin();
     cout<<min(x,n)<<" ";
    }
}