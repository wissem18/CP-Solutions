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
bool ispalindrome(string s){
    string k=s;
    reverse(s.begin(),s.end());
    return k==s;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
   int t;
   cin>>t;
   while(t--){
     ll n,m;
     cin>>n>>m;
     int a[n];
     vector<ll>occ(n+m+1, 0);//count the contribution of each number in the m+1 arrays
       for (int i = 0; i < n; ++i) {
           cin>>a[i];
           occ[a[i]]=m+1;
       }
       for (int i = 0; i < m; ++i) {
           int p,v;
           cin>>p>>v;
           p--;
           occ[a[p]]-=(m-i);//we delete a[p] from the rest of arrays
           occ[v]+=(m-i);//we add v to the rest of arrays
           a[p]=v;
       }
       ll ans=n*m*(m+1);//we suppose that all the elements in all arrays are distinct
       for (int i = 1; i <=n+m; ++i) {
          ans-=occ[i]*(occ[i]-1)/2;//we remove the number of distinct pairs of arrays such that have the number i in common
       }
       cout<<ans<<nl;
   }
}
 