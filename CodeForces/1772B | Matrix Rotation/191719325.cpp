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
 while(t--) {
     int a,b,c,d;
     cin>>a>>b>>c>>d;
     if((a<=b&&a<=c&&c<=d&&b<=d)||(c<=a&&c<=d&&a<=b&&d<=b)||(d<=c&&d<=b&&c<=a&&b<=a)||(b<=a&&b<=d&&a<=c&&d<=c))
         cout<<"YES"<<nl;
     else
         cout<<"NO"<<nl;
 }
}