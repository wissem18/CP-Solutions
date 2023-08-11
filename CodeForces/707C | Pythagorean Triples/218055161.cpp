 
#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
double const pi = 3.141592653;
vector<int> dx = {0, 1, 0, -1};
vector<int> dy = {1, 0, -1, 0};
int MOD = 1e9 + 7;
 
bool verify(int x, int p, vector<int> &nums) {
    int cnt = 0;
    for (int i = 0; i < nums.size() - 1; ++i) {
        if (nums[i + 1] - nums[i] <= x) {
            cnt++;
            i++;
        }
    }
    return (cnt >= p);
}
 
int minimizeMax(vector<int> &nums, int p) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int l = 0, r = 1e9;
    while (l < r) {
        int mid = (l + r) / 2;
        if (verify(mid, p, nums))
            r = mid;
        else
            l = mid + 1;
    }
    return l;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll n;
    cin >> n;
    if (n <3) {
        cout << -1;
        return 0;
    }
 
    if (n % 2) {
        ll m = (n * n - 1) / 2;
        ll k = (n * n + 1) / 2;
        cout << m << " " << k;
    } else {
 
        ll m = (n * n - 4) / 4;
        ll k = (n * n + 4) / 4;
        cout << m << " " << k;
    }
 
}
 
 