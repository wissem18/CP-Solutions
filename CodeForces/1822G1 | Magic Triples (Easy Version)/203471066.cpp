#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int MOD = 1e9 + 7;
const int N=1e6+2;
vector<int>divisors[N];
void sieve(){
    for (int i = 2; i*i <N ; ++i) {
 
        for (int j = i; j <N ; j+=i) {
            divisors[j].push_back(i);
        }
    }
}
int occ[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
 int t;
 cin>>t;
 sieve();
 while(t--){
int n;cin>>n;
int a[n];
     for (int i = 0; i < n; ++i) {
         cin>>a[i];
         occ[a[i]]++;
     }
     ll ans=0;
     for (int i = 0; i < n; ++i) {
         ans+=(occ[a[i]]-1)*1LL*(occ[a[i]]-2);
         for (auto d:divisors[a[i]]) {
              if(a[i]*1LL*d<=1e6)
              ans+=occ[a[i]/d]*1LL*occ[a[i]*1LL*d];
         }
     }
 
     cout<<ans<<"\n";
     for (int i = 0; i < n; ++i) {
         occ[a[i]]=0;
     }
 }
}