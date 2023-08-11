#include "bits/stdc++.h"

using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
vector<int> z_function(string s) {
    int n = (int) s.length();
    vector<int> z(n);
    int l=0,r=0;
    z[0]=n;
    for (int i = 1; i < n; ++i) {
        if (i <= r)
            z[i] = min (r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
    return z;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);[
    //freopen("output.txt", "w", stdout);
   ll a,b;
   cin>>a>>b;
   ll ans=0;
   while(a!=b){
       if(a<b){
        ll k=(b-1)/a;
        ans+=k;
        b-=k*a;
       }
       else{
           ll k=(a-1)/b;
           ans+=k;
           a-=k*b;
       }
   }
   cout<<ans<<endl;
}