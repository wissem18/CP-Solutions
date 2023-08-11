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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> pos;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '1')
                pos.push_back(i);
        }
        if (pos.size() % 2)
            cout << -1 << nl;
        else {
            if (pos.size() == 2) {
                if (pos[1] - pos[0] > 1)
                    cout << 1 << nl;
                else {
                    if (pos[0] > 1 || pos[1] < s.size() - 2)
                        cout << 2 << nl;
                    else {
                        if (s == "0110")
                            cout << 3 << nl;
                        else
                            cout << -1 << nl;
                    }
                }
            } else
                cout << pos.size() / 2 << nl;
        }
    }
}