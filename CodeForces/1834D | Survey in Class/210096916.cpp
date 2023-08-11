#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
 
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
        int l[n], r[n];
        for (int i = 0; i < n; ++i) {
            cin >> l[i] >> r[i];
        }
        int mxl = 0, mnr = m, mnlen = m;
        for (int i = 0; i < n; ++i) {
            mxl = max(mxl, l[i]);
            mnr = min(mnr, r[i]);
            mnlen = min(mnlen, r[i] - l[i] + 1);
        }
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            ans = max(ans, min(r[i] - l[i] + 1, max({mxl - l[i], r[i] - mnr,r[i]-l[i]+1-mnlen})) );
        }
        cout << ans * 2 << endl;
    }
}