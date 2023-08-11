#include "bits/stdc++.h"

using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
double const pi = 3.141592653;
vector<int> dx = {0, 1, 0, -1};
vector<int> dy = {1, 0, -1, 0};
int MOD = 1e9 + 7;
map<int,vector<int>>strong;
bool vis[55];
void dfs(int cur,set<int>&s){
    vis[cur]=true;
    s.insert(cur);
    for (auto x:strong[cur]) {
       if(!vis[x])
           dfs(x,s);
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
 int n,m;
 cin>>n>>m;
 int a[m],b[m];

    for (int i = 0; i < m; ++i) {
        cin>>a[i]>>b[i];
        strong[a[i]].push_back(b[i]);
    }
    int ans=-1;
    for (int i = 1; i <=n ; ++i) {
        memset(vis,false,sizeof vis);
        set<int>s;
        dfs(i,s);
        if(s.size()==n){
            ans=i;
            break;
        }
    }
    cout<<ans;
}

