#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
ll phi(ll n) {
    ll result = n;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
  ll n,k;
  cin>>n>>k;
  //f is the Euler's totient function
  //g is the identity function g(n)=n
  //so Fk(n) is the application of the Euler's totient function (k+1) times
  //phi(phi(m))<=m/2 so we will apply phi log(m) times than it becomes 1 and phi(1)=1
  ll ans=n;
  ll x=(k+1)/2;
  while(x--){
     ans=phi(ans);
     if(ans==1)
         break;
  }
  cout<<ans%MOD<<endl;
}