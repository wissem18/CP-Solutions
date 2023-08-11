#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
 
bool ok(int mid, int &n, vector<int> &queries, vector<pair<int, int>> &a) {
    vector<int> pre(n + 1, 0);
    for (int i = 0; i < mid; ++i) {
        pre[queries[i]] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        pre[i] += pre[i - 1];
    }
    for (int i = 0; i < a.size(); ++i) {
        int l = a[i].first;
        int r = a[i].second;
        if ((r - l + 1) / 2 < pre[r] - pre[l - 1])
            return true;
    }
    return false;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> a(m);
        for (int i = 0; i < m; ++i) {
            cin >> a[i].first >> a[i].second;
        }
        int q;
        cin >> q;
        vector<int> queries(q);
        for (int i = 0; i < q; ++i) {
            cin >> queries[i];
        }
        int l = 1, r = q+1;
        while (l < r) {
            int mid = (l + r) / 2;
            if (ok(mid, n, queries, a)) {
                r=mid;
            }
            else
                l=mid+1;
        }
        if(l>q)
            l=-1;
        cout<<l<<endl;
    }
}