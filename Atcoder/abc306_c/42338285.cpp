#include "bits/stdc++.h"

using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 998244353;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
int n;
cin>>n;
int a[3*n];
    for (int i = 0; i < 3*n; ++i) {
        cin>>a[i];
    }
    vector<int>pos(n+1);
    map<int,vector<int>>p;
    for (int i = 0; i < 3*n; ++i) {
        p[a[i]].push_back(i);
    }
    for (auto x:p) {
        pos[x.first]=x.second[1];
    }
    vector<int>ans;
    for (int i = 1; i <=n ; ++i) {
        ans.push_back(i);
    }
    sort(ans.begin(),ans.end(),[&pos](int &a,int &b){return pos[a]<pos[b];});
    for (int i = 0; i < n; ++i) {
        cout<<ans[i]<<" ";
    }
}