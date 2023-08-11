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
bool vis[N];
vector<int>adj[N];
bool anc[N];
stack<int> s;
bool isCyclic(int p){
    vis[p]=true;
    anc[p]=true;
    for (int i = 0; i <adj[p].size() ; ++i) {
        int x=adj[p][i];
        if(vis[x]&&anc[x])
            return true;
        else if(!vis[x]&& isCyclic(x))
            return true;
    }
    anc[p]=false;
    return false;
}
void dfs(int p)
{
    vis[p]=true;
    for (auto child:adj[p])
    {
        if (!vis[child])
            dfs(child);
    }

    s.push(p);
    return ;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n,m;
    cin>>n>>m;
    set<pi>st;
    for (int i = 0; i < m; ++i) {
        int x,y;
        cin>>x>>y;
        st.insert({x,y});
    }
    for (auto x:st) {
     adj[x.first].push_back(x.second);
    }
    memset(vis, false, sizeof vis);
    memset(anc, false, sizeof anc);
    bool test= false;
    for (int i=1 ; i<=n ; i++)
    {
        if (!vis[i])
            test|=isCyclic(i);
    }
    if(test)
        cout<<"No";
    else{
    memset(vis, false, sizeof vis);
    for (int i=1 ; i<=n ; i++)
    {
        if (!vis[i])
            dfs(i);
    }
    bool t=true;
    vector<int>a;
    while(!s.empty()){
        a.push_back(s.top());
        s.pop();
    }
        for (int i = 1; i <n ; ++i) {
            if(!st.count({a[i],a[i-1]})&&!st.count({a[i-1],a[i]})){
                t=false;
                break;
            }
        }
        if(!t)
            cout<<"No";
        else{
            int ans[n+1];
            for (int i = 0; i <n ; ++i) {
                ans[a[i]]=i+1;
            }
            cout<<"Yes"<<nl;
            for (int i = 1; i <=n ; ++i) {
                cout<<ans[i]<<" ";
            }
        }
}
}

