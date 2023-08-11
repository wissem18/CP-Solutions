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
const int MAX = 1e5;
vector<int> divisors[MAX + 5];
 
void sieve() {
    for (int i = 1; i <= MAX; ++i) {
        for (int j = i; j <= MAX; j += i)
            divisors[j].push_back(i);
    }
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    sieve();
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a + n);
        int cnt = 0;
        int occ[m + 2];
        int ans = 1e8;
        memset(occ, 0, sizeof occ);
        int l = 0, r = 0;
        while (r < n) {
            for (auto d: divisors[a[r]]) {
                if (d <= m) {
                    occ[d]++;
                    if (occ[d] == 1)
                        cnt++;
                }
            }
            if (cnt == m) {
                while (cnt == m) {
                    ans = min(ans, a[r] - a[l]);
                    for (auto d: divisors[a[l]]) {
                        if (d <= m) {
                            occ[d]--;
                            if (occ[d] == 0)
                                cnt--;
                        }
                    }
                    l++;
                }
            }
            r++;
        }
        if (ans == 1e8)
            cout << -1 << nl;
        else
            cout << ans << nl;
    }
 
}