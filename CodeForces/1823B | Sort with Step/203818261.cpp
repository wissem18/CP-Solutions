#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int MOD = 998244353;
const int N=2e5+5;
int parent[N];
int sz[N];
 
void make_set(int v) {
    parent[v] = v;
    sz[v] = 1;
}
 
 
int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
 
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sz[a] < sz[b])
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int p[n];
    for (int i = 0; i < n; ++i) {
        cin>>p[i];
        p[i]--;
    }
    if(k==1){
        cout<<0<<endl;
    }
    else{
        vector<int>a[k];
        for (int i = 0; i < n; ++i) {
            a[i%k].push_back(p[i]);
        }
        int cnt=0;
        for (int i = 0; i < k; ++i) {
            for (int j = 0; j < a[i].size(); ++j) {
                if(a[i][j]%k!=i)
                    cnt++;
            }
        }
        if(cnt==0)
            cout<<0<<endl;
        else if(cnt==2)
            cout<<1<<endl;
        else
            cout<<-1<<endl;
    }
}
}