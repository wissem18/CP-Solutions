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
   cin>>t;
   while(t--){
     int n;
     cin>>n;
     int a[n];
       for (int i = 0; i < n; ++i) {
           cin>>a[i];
       }
    bool test=false;
       for (int i = 0; i < n; ++i) {
           for (int j = i+1; j <n ; ++j) {
               if(__gcd(a[i],a[j])<=2){
                   test= true;
                   break;
               }
           }
       }
       test?cout<<"YES"<<nl:cout<<"NO"<<nl;
   }
}
 