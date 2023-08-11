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
        cin>>n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        sort(a,a+n);
        vector<int>s;
        int cur=1;
        ll ans=0;
        int i=0;
        while(i<n){
            int j=i;
            while(a[j]==cur)
                j++;
            if(i==j){
                ans+=a[i]-cur;
                cur++;
                i++;
            }
            else{
                cur++;
                i=j;
            }
        }
        cout<<ans<<nl;
    }
}