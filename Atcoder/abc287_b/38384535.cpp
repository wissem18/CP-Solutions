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
    int n,m;
    cin>>n>>m;
    string a[n],b[m];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin>>b[i];
    }
    sort(b,b+m);
    int cnt=0;
    for (int i = 0; i < n; ++i) {
        string k=a[i].substr(3,3);
        if(upper_bound(b,b+m,k)!=lower_bound(b,b+m,k))
            cnt++;
    }
    cout<<cnt;

}