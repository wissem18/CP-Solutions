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
    int t;
    cin >> t;
    while (t--) {
      int n;
      cin>>n;
      string s;
      cin>>s;
      int ans=n-1;
        for (int i = 0; i < n-2; ++i) {
            if(s[i]==s[i+2])
                ans--;
        }
        cout<<ans<<nl;
    }
}
 