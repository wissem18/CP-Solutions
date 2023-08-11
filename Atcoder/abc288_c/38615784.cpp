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
const int N=2e5+5;
vector<int>graph[N];
void DFSCycle(int u, int p, int color[], int par[], int& cyclenumber){

    //the node is already considered
    if (color[u] == 2) {
        return;
    }

    //partially visited node found i.e new cycle found
    if (color[u] == 1) {
        cyclenumber++;

        return;
    }

    //storing parent of u
    par[u] = p;

    //marking as partially visited
    color[u] = 1;
    for (int v : graph[u]) {

        if (v == par[u]) {
            continue;
        }
        DFSCycle(v, u, color, par, cyclenumber);
    }

    //marking as fully visited
    color[u] = 2;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < m; ++i) {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int cnt=0;
    int c[n+1],p[n+1];
    memset(c,-1,sizeof c);
    memset(p,-1,sizeof p);
    for (int i = 1; i <=n ; ++i) {
        if(c[i]!=2)
        DFSCycle(i,p[i],c,p,cnt);
    }
    cout<<cnt;
}