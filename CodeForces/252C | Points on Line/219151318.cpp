 
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
    int n, d;
    cin >> n >> d;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        int x= upper_bound(a,a+n,a[i]+d)-a;
        x=x-i-1;
        if(x>1){
            ans+=(x)*1LL*(x-1)/2;
        }
    }
    cout << ans << endl;
}
 
 
 