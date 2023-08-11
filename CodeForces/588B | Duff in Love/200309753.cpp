#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
vector<ll> divisors(ll n){
    vector<ll>ans;
    for (ll i = 1; i*i <=n ; ++i) {
        if(n%i==0) {
            ans.push_back(i);
            ans.push_back(n / i);
        }
    }
    return ans;
}
ll spf(ll n)
{
    // if divisible by 2
    if (n % 2 == 0)
        return 2;
 
    // iterate from 3 to sqrt(n)
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
    return n;
}
unordered_map<ll,int>factors;
bool isLovely(ll x)
{
    factors.clear();
    while (x != 1)
    {
        factors[spf(x)]++;
        if(factors[spf(x)]>1)
            return false;
        x = x / spf(x);
    }
    return true;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
  ll n;
  cin>>n;
  vector<ll>a= divisors(n);
  sort(a.rbegin(), a.rend());
    for (int i = 0; i < a.size(); ++i) {
      if(isLovely(a[i])){
          cout<<a[i]<<endl;
          break;
      }
    }
}