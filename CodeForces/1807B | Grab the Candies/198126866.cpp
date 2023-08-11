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
cin>>t;
while(t--){
   int n;
   cin>>n;
   int a[n];
   int e=0,o=0;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        if(a[i]%2==0)
            e+=a[i];
        else
            o+=a[i];
    }
    (e>o)?cout<<"YES"<<nl:cout<<"NO"<<nl;
}
}