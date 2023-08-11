 
#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
double const pi = 3.141592653;
vector<int> dx = {0, 1, 0, -1};
vector<int> dy = {1, 0, -1, 0};
int MOD = 1e9 + 7;
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll c[n];
        map<ll, ll> occ;
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
            occ[c[i]]++;
        }
        int q;
        cin >> q;
        vector<ll> res;
        while (q--) {
            ll x, y;
            cin >> x >> y;
            ll ans = 0;
            ll delta = x * x - 4 * y;
            if (delta < 0) {
                res.push_back(ans);
            } else if (delta == 0) {
                ll b = x / 2;
                ll a = x - b;
                if (a == b) {
                    ans = occ[a]*(occ[a]-1) / 2;
                } else {
                    ans = occ[a]*occ[b];
                }
                res.push_back(ans);
            } else {
                ll b1 = (sqrt(delta) + x) / 2;
                ll a1 = x - b1;
                if (a1 * b1 == y) {
                    if (a1 == b1) {
                        ans += occ[a1]*(occ[a1]-1) / 2;
                    } else {
                        ans += occ[a1]* occ[b1];
                    }
                }
                ll b2 = (-sqrt(delta) + x) / 2;
                ll a2 = x - b2;
                if (a2 * b2 == y &&a2!=b1) {
                    if (a2 == b2) {
                        ans += occ[a2]*(occ[a2]-1) / 2;
                    } else {
                        ans += occ[a2]* occ[b2];
                    }
                }
                res.push_back(ans);
            }
        }
        for (int i = 0; i < res.size(); ++i) {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
 
}
 
 