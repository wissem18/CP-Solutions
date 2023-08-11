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
int spf(int n)
{
    // if divisible by 2
    if (n % 2 == 0)
        return 2;
 
    // iterate from 3 to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
 
    return n;
}
vector<int> getFactorization(int x)
{
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(spf(x));
        x = x / spf(x);
    }
    return ret;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--) {
      int n;
      cin>>n;
      vector<int>a= getFactorization(n);
      map<int,int>occ;
        for (int i = 0; i <a.size(); ++i) {
            occ[a[i]]++;
        }
       vector<pi>f;
        ll p=1;
        for (auto x:occ) {
           f.push_back({x.second,x.first});
           p*=x.first;
        }
        sort(f.begin(),f.end());
        ll ans=0;
        int lst=1;
        int cum=0;
        for (int i =0 ; i <f.size(); ++i) {
            p/=lst;
            ans+=((f[i].first-cum)*p);
            cum=f[i].first;
            lst=f[i].second;
        }
        cout<<ans<<nl;
    }
}