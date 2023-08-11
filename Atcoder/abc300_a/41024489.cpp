#include "bits/stdc++.h"

using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int MOD = 998244353;
vector<ll>primes;
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int i = 2; i <=n ; ++i) {
        if(prime[i])
            primes.push_back(i);
    }
}
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0), cout.tie(0);
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
      ll n;
      cin>>n;
      int x=sqrtl(n);
        SieveOfEratosthenes(x);
      int ans=0;
        for (int i = 0; i < primes.size(); ++i) {
            for (int j = i+1; j < primes.size(); ++j) {
                ll cur=primes[i]*primes[i]*primes[j];
                ll a=sqrtl(n/cur);
                if(primes[j]>=a)
                    break;
                int ind=upper_bound(primes.begin(),primes.end(),a)-primes.begin()-1;
                ans+=ind-j;
            }
        }
      cout<<ans;
    }
