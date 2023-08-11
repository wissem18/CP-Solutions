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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    set<pair<int, int>> st;
    for (int i = 0; i < n; ++i) {
        st.insert({a[i], i + 1});
    }
    pair<int, int> mn = *st.begin();
    pair<int, int> mx = *prev(st.end());
    int cnt = 0;
    int d = mx.first - mn.first;
    vector<pair<int, int>> ans;
    while (cnt < k) {
        st.erase(mx);
        st.insert({mx.first - 1, mx.second});
        st.erase(mn);
        st.insert({mn.first + 1, mn.second});
        ans.push_back({mx.second, mn.second});
        mn = *st.begin();
        mx = *prev(st.end());
        if (mx.first - mn.first > d){
            ans.pop_back();
            break;
        }
        d = mx.first - mn.first;
        cnt++;
 
    }
    cout << d << " " << ans.size() << endl;
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}