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
       int n;
       cin>>n;
       int a[n];
       for (int i = 0; i <n ; ++i) {
           cin>>a[i];
       }
       int ans=0;
       int i=0;
       while(i<n){
           int j=i+1;
           while(a[i]%2==a[j]%2&&j<n){
               ans++;
               j++;
               i++;
           }
           i++;
       }
    cout<<ans<<nl;
   }
 
}