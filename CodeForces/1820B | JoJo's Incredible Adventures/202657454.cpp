#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int nb = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '0')
                break;
            nb++;
        }
        if (nb == s.size())
            cout << nb * 1LL * nb << endl;
        else {
            int l = 0;
            int i = 0;
            while (i < s.size()) {
                if (s[i] == '1') {
                    int j = i;
                    while (j < s.size() && s[j] == '1')
                        j++;
                    if (j == s.size())
                        l = max(l, j - i + nb);
                    else
                        l = max(l, j - i);
                    i = j - 1;
                }
                i++;
            }
 
            ll ans = 0;
            for (int j = 0; j < l; ++j) {
                ans = max(ans, (l - j) *1LL* (j + 1));
            }
            cout << ans << endl;
        }
    }
}