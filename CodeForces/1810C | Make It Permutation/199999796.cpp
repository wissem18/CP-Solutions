#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
const int N=1e5+5;
map<int,ll> mem;
ll dp(int i,int lst,int n,ll &c,ll &d,vector<int>&z){
    if(i==n)
        return 0;
    if(mem.count(i))
        return mem[i];
return mem[i]=min(dp(i+1,z[i],n,c,d,z)+d*1LL*(z[i]-lst-1),dp(n,z[i],n,c,d,z)+c*1LL*(n-i));
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
  int t;
  cin>>t;
  while(t--){
      ll n,c,d;
      cin>>n>>c>>d;
   int a[n];
   map<int,ll>occ;
      for (int i = 0; i < n; ++i) {
          cin>>a[i];
          occ[a[i]]++;
      }
      vector<int>z;
      ll ans=0;
      for (auto x:occ) {
         ans+=c*(x.second-1);
         z.push_back(x.first);
      }
      sort(z.begin(),z.end());
      if(z[0]!=1){
          ans+=d;
      }
      int lst=1;
      int i=(z[0]!=1)?0:1;
      while(i<z.size()&&z[i]-lst==1){
          lst=z[i];
          i++;
      }
      mem.clear();
      ans+=dp(i,lst,(int)z.size(),c,d,z);
      cout<<ans<<endl;
  }
}