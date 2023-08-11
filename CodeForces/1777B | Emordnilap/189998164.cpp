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
//int getCommon(vector<int>& nums1, vector<int>& nums2) {
//    int ans=0;
//    for (int i = 0; i < nums1.size(); ++i) {
//        if(upper_bound(nums2.begin(),nums2.end(),nums1[i])-lower_bound(nums2.begin(),nums2.end(),nums1[i]))
//    }
//}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
   int t;
   cin>>t;
   while(t--){
       ll n;
       cin>>n;
       ll ans=1;
       for (ll i =1 ; i <=n ; ++i) {
        ans=((ans%MOD)*(i%MOD))%MOD;
       }
      ans=(ans%MOD*n%MOD)%MOD;
       ans=(ans%MOD*(n-1)%MOD)%MOD;
       cout<<ans<<nl;
   }
 
}