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
        ll n, k, g;
        cin >> n >> k >> g;
        ll r = (g + 1) / 2;
        r--;
        ll x = k * g;
        ll a = max(x - (n - 1) * r, 0LL);
        if (a % g >= (g + 1) / 2)
            a = g * (1 + a / g);
        else
            a = a - a % g;
        cout << x - a << endl;
    }
}