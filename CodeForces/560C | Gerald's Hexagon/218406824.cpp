 
#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
double const pi = 3.141592653;
vector<int> dx = {0, 1, 0, -1};
vector<int> dy = {1, 0, -1, 0};
int MOD = 1e9 + 7;
vector<vector<int>> mem;
 
int dp(int i, int cur, int &amount, vector<int> &coins) {
    if (i == coins.size()) {
        return cur == amount;
    }
    if (mem[i][cur] != -1)
        return mem[i][cur];
    int ans = 0;
    for (int j = 0; j <= 5000; ++j) {
        if (cur + j * coins[i] > amount)
            break;
        ans += dp(i + 1, cur + j * coins[i], amount, coins);
    }
    return mem[i][cur] = ans;
 
}
 
int change(int amount, vector<int> &coins) {
    int n = coins.size();
    mem.assign(n + 1, vector<int>(amount + 1, -1));
    return dp(0, 0, amount, coins);
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int a[6];
    for (int i = 0; i < 6; ++i) {
        cin>>a[i];
    }
    int ans=(a[0]+a[1]+a[2])*(a[0]+a[1]+a[2])-a[0]*a[0]-a[2]*a[2]-a[4]*a[4];
 
    cout<<ans<<endl;
}
 
 
 