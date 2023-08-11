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
    ll n,r,avg;
    cin>>n>>r>>avg;
    pi a[n];
    ll sum=0;
    for (int i = 0; i < n; ++i) {
        cin>>a[i].first>>a[i].second;
        sum+=a[i].first;
    }
    //first calculate the number of increases to reach the avg
    ll x=avg*n-sum;
    if(x<=0)
        cout<<0;
    else{
        sort(a,a+n,[](pi &a,pi &b){
            return a.second<b.second;
        });
        int i=0;
        ll ans=0;
        while(x){
           ans+=min(r-a[i].first,x)*a[i].second*1LL;
           x-=min(r-a[i].first,x);
           i++;
        }
        cout<<ans;
    }
 
  }