#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
int n,m;
const int N=1e5+5;
int a[N];
vector<int>graph[N];
bool vis[N];
int bfs(int p){
    int ans=0;
    vis[p]=true;
    queue<pair<int,int>> qu;
    qu.push({p,a[p]});
    while(!qu.empty()){
        int x=qu.front().first;
        int cats=qu.front().second;
        qu.pop();
        int cnt=0;
        for (int i = 0; i < graph[x].size(); ++i) {
            int y=graph[x][i];
            if(!vis[y]){
                cnt++;
                if(a[y]&&cats+a[y]<=m){
                    vis[y]= true;
                    qu.push({y,cats+a[y]});
                }
                else if(!a[y]){
                    vis[y]=true;
                    qu.push({y,0});
                }
            }
        }
        if(!cnt)
            ans++;
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin>>n>>m;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    for (int i = 0; i <n-1 ; ++i) {
        int x,y;
        cin>>x>>y;
        x--,y--;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for (int i = 0; i < n; ++i) {
        vis[i]=false;
    }
    cout<<bfs(0);
  }