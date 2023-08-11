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
const int N=2e5+5;
vector<int>graph[N];
bool vis[N];
void dfs(int p,vector<int>&v){
    vis[p]=true;
    v.push_back(p);
    for (int i = 0; i <graph[p].size() ; ++i) {
        int c=graph[p][i];
        if(!vis[c]){
            dfs(c,v);
        }
    }
    return;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--)
    {
     int n,m;
     cin>>n>>m;
     while(m--){
         int x,y;
         cin>>x>>y;
         graph[x].push_back(y);
         graph[y].push_back(x);
     }
        memset(vis, false,sizeof vis);
     bool test=true;
        for (int i = 1; i <=n ; ++i) {
            if(!vis[i]){
               vector<int>v;
                dfs(i,v);
                int cnt=0;
                for (int j = 0; j < v.size(); ++j) {
                    cnt+=graph[v[j]].size();
                }
                if(cnt/2!=v.size()){
                    test=false;
                    break;
                }
            }
        }
        (test)?cout<<"Yes":cout<<"No";
    }
}
