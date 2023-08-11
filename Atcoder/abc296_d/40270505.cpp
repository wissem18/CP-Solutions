#include "bits/stdc++.h"

using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
const int N=2e5+5;
vector<int>graph[N];
bool vis[N];
bool anc[N];
int cnt;
bool isCyclic(int p){
    vis[p]=true;
    anc[p]=true;

    for (int i = 0; i <graph[p].size() ; ++i) {
        int x=graph[p][i];
        if(vis[x]&&anc[x]){
            cnt=x;
            return true;
        }
        else if(!vis[x])
            return isCyclic(x);
    }
    anc[p]=false;
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        graph[i+1].push_back(a[i]);
    }
    memset(vis,false,sizeof vis);
    int nb=0;
    for (int i = 1; i <=n ; ++i) {
        if(!vis[i]){
            memset(anc,false,sizeof anc);
            cnt=0;
            if(isCyclic(i)){
                int x=graph[cnt][0];
                nb++;
                while(x!=cnt){
                    nb++;
                    x=graph[x][0];
                }
            }
        }
    }
    cout<<nb;
}