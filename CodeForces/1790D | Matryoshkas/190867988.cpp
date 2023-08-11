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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        map<int,int>m;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            m[a[i]]++;
        }
        int cnt=0;
        int k=0;
        for(auto x:m) {
            if(cnt==0)
                k=x.second;
            else{
                k+=max(0,x.second-m[x.first-1]);
            }
            cnt++;
        }
        cout << k << nl;
    }
}