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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s, k;
        cin >> s >> k;
            int rev = 0, dir = 0;
            for (int i = 0; i < n; ++i) {
                if (s[i] != k[i])
                    dir++;
                if (s[i] != k[n - i - 1])
                    rev++;
            }
            if(dir==0){
                cout<<0<<endl;
            }
            else{
            int ans = min(dir + dir - 1 + (dir - 1) % 2,max(2,rev+rev-1+((rev-1)%2==0)));
            cout<<ans<<endl;
            }
        }
}