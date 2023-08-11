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
  int a[n],b[m];
    int c[n+m];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        c[i]=a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin>>b[i];
        c[i+n]=b[i];
    }
sort(c,c+n+m);
    map<int,int>pos;
    for (int i = 0; i < n+m; ++i) {
        pos[c[i]]=i+1;
    }
    for (int i = 0; i < n; ++i) {
        cout<<pos[a[i]]<<" ";
    }
    cout<<nl;
    for (int i = 0; i < m; ++i) {
        cout<<pos[b[i]]<<" ";
    }
    cout<<nl;
}
