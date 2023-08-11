#include "bits/stdc++.h"

using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 998244353;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
vector<ll>a(64);
    for (int i = 0; i < 64; ++i) {
        cin>>a[i];
    }
    unsigned ll ans=0;
    unsigned ll x=1;
    for (int i = 0; i < 64; ++i) {
        ans+=a[i]*x;
        x*=2;
    }
    cout<<ans;
}