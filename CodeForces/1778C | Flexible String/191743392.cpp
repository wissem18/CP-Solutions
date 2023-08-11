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
ll count(string a,string b,set<char>st){
ll cnt=0;
ll res=0;
    for (int i = 0; i < a.size(); ++i) {
        if(a[i]==b[i]||st.count(a[i])){
            cnt++;
        }
        else{
            res+=cnt*(cnt+1)/2;
            cnt=0;
        }
    }
    res+=cnt*(cnt+1)/2;
    return res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
 int t;
 cin>>t;
 while(t--) {
  ll n,k;
  cin>>n>>k;
  string a,b;
  cin>>a>>b;
  set<char>st;
     for (int i = 0; i < n; ++i) {
         st.insert(a[i]);
     }
      if(st.size()<=k){
          cout<<n*(n+1)/2<<nl;
      }
      else{
      vector<char>x;
     for (auto c:st) {
       x.push_back(c);
     }
     ll ans=0;
     for (int i = 0; i <(1<<st.size()) ; ++i) {
         if (__builtin_popcount(i)==k){
             set<char>res;
             for (int j = 0; j < st.size(); ++j) {
                 if(i&(1<<j)){
                     res.insert(x[j]);
                 }
             }
             ans=max(ans, count(a,b,res));
         }
     }
     cout<<ans<<nl;
 }
 }
}