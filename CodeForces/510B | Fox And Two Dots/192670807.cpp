#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl = '\n';
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
int n,m;
bool vis[50][50];
char grid[50][50];
bool isCyclic(pi p,pi parent){
    vis[p.first][p.second]=true;
    for (int i = 0; i <4 ; ++i) {
        int x=p.first+dx[i];
        int y=p.second+dy[i];
        if(x>=n||x<0||y>=m||y<0||grid[x][y]!=grid[p.first][p.second])
            continue;
        if(vis[x][y]&&x!=parent.first&&y!=parent.second)
            return true;
        else if(!vis[x][y]&& isCyclic({x,y},p))
            return true;
    }
    return false;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
     cin>>n>>m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>grid[i][j];
        }
    }
    memset(vis, false,sizeof vis);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(!vis[i][j]){
                if(isCyclic({i,j},{-1,-1})){
                    cout<<"Yes";
                    return 0;
                }
            }
        }
    }
    cout<<"No";
}