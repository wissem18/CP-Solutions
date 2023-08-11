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
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s, l;
        cin >> s >> l;
        set<int> pos;
        for (int i = 1; i <= n; ++i) {
            if (i + k <= n) {
                pos.insert(i);
                pos.insert(i + k);
            }
            if (i + k < n)
                pos.insert(i + k + 1);
        }
        string x1 = "", x2 = "";
        for (auto x: pos) {
            x1 += s[x - 1];
            x2 += l[x - 1];
        }
        bool test = true;
        for (int i = 1; i <= n; ++i) {
            if (!pos.count(i)) {
                if (s[i - 1] != l[i - 1]) {
                    test = false;
                    break;
                }
            }
        }
        if (!test)
            cout << "NO" << nl;
        else {
            sort(x1.begin(), x1.end());
            sort(x2.begin(), x2.end());
            (x1 == x2) ? cout << "YES" : cout << "NO";
            cout << nl;
        }
    }
}