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
const int N=2*1e5+2;
vector<int>graph[N];
bool vis[N];
bool isCyclic(int p,int parent){
    vis[p]=true;
    unsigned ll sz=graph[p].size();
    for (unsigned ll i = 0; i <sz ; ++i) {
        int x=graph[p][i];
        if(vis[x]&&x!=parent)
            return true;
        else if(!vis[x]&& isCyclic(x,p))
            return true;
    }
    return false;
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
    if(n-m!=1)
        cout<<"No";
    else{
        memset(vis,false,sizeof vis);
        bool test=false;
        for (int i = 1; i <=n ; ++i) {
            if(!vis[i]){
                test|=isCyclic(i,-1);
            }
        }
        if(test)
            cout<<"No";
        else
            cout<<"Yes";
    }

}