#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
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
        int n,k;
        cin>>n>>k;
        int a[n][n];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin>>a[i][j];
            }
        }
        int ans=0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if(a[i][j]!=a[n-i-1][n-j-1])
                    ans++;
            }
        }
        ans/=2;
            (ans<=k&&((k-ans)%2==0||n%2))?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}