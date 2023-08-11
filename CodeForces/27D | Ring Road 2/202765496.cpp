#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int MOD = 1e9 + 7;
int n;
vector<vector<int>> adj, adj_t;
vector<bool> used;
vector<int> order, comp;
vector<bool> assignment;
 
void dfs1(int v) {
    used[v] = true;
    for (int u : adj[v]) {
        if (!used[u])
            dfs1(u);
    }
    order.push_back(v);
}
 
void dfs2(int v, int cl) {
    comp[v] = cl;
    for (int u : adj_t[v]) {
        if (comp[u] == -1)
            dfs2(u, cl);
    }
}
 
bool solve_2SAT() {
    order.clear();
    used.assign(n, false);
    for (int i = 0; i < n; ++i) {
        if (!used[i])
            dfs1(i);
    }
 
    comp.assign(n, -1);
    for (int i = 0, j = 0; i < n; ++i) {
        int v = order[n - i - 1];
        if (comp[v] == -1)
            dfs2(v, j++);
    }
 
    assignment.assign(n / 2, false);
    for (int i = 0; i < n; i += 2) {
        if (comp[i] == comp[i + 1])
            return false;
        assignment[i / 2] = comp[i] > comp[i + 1];
    }
    return true;
}
 
void add_disjunction(int a, bool na, int b, bool nb) {
    // na and nb signify whether a and b are to be negated
    a = 2*a ^ na;
    b = 2*b ^ nb;
    int neg_a = a ^ 1;
    int neg_b = b ^ 1;
    adj[neg_a].push_back(b);
    adj[neg_b].push_back(a);
    adj_t[b].push_back(neg_a);
    adj_t[a].push_back(neg_b);
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
int m,x;
cin>>m>>x;
n=2*x;
pair<int,int>a[x];
    for (int i = 0; i < x; ++i) {
        cin>>a[i].first>>a[i].second;
        if(a[i].second<a[i].first)
            swap(a[i].first,a[i].second);
    }
    adj.resize(n);
    adj_t.resize(n);
    for (int i = 0; i < x; ++i) {
        for (int j = i+1; j < x; ++j) {
            if((a[j].first>a[i].first&&a[j].first<a[i].second&&a[j].second>a[i].second)||(a[i].first>a[j].first&&a[i].first<a[j].second&&a[i].second>a[j].second)) {
                add_disjunction(i, false, j, false);
                add_disjunction(i, true, j, true);
            }
        }
    }
if(solve_2SAT())
{
    string ans="";
    for (int i = 0; i < x; ++i) {
        if(comp[2*i]<comp[2*i+1]){
            ans+='i';
        }
        else
            ans+='o';
    }
    cout<<ans;
}
else{
    cout<<"Impossible";
}
}