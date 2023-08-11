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
        int n;
        cin>>n;
        int a[n],b[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i]>>b[i];
        }
        int ans=1;
       ll gcdd=0;
        ll lcmm=1;
        for (int i = 0; i <n ; ++i) {
           gcdd=gcd(a[i]*1LL*b[i],gcdd);
           lcmm=lcm(b[i],lcmm);
           if(gcdd%lcmm){
               ans++;
              gcdd=a[i]*1LL*b[i];
              lcmm=b[i];
           }
        }
        cout<<ans<<endl;
    }
}