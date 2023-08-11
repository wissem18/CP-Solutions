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
    int n;
    cin>>n;
    int a[5*n];
    for (int i = 0; i < 5*n; ++i) {
        cin>>a[i];
    }
    sort(a,a+5*n);
    int sum=0;
    for (int i = n; i <4*n; ++i) {
        sum+=a[i];
    }
    double ans=sum*1.0/(3*n);
    cout<<fixed<<setprecision(9)<<ans<<nl;
}

