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
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
 int t;
 cin>>t;
 while(t--){
  int n,m,d;
  cin>>n>>m>>d;
  int a[n];
  int pos[n+1];
     for (int i = 0; i < n; ++i) {
         cin>>a[i];
         pos[a[i]]=i;
     }
     int b[m];
     for (int i = 0; i < m; ++i) {
         cin>>b[i];
     }
     int ans=n;
     for (int i = 0; i < m-1; ++i) {
         if(pos[b[i]]<pos[b[i+1]]&&pos[b[i+1]]<=pos[b[i]]+d){
         int l=pos[b[i+1]]-pos[b[i]];
         int r=d-pos[b[i+1]]+pos[b[i]]+1;
         if(r>n-1-pos[b[i+1]]+pos[b[i]])
             r=1e8;
         ans=min(ans,min(l,r));}
         else{
             ans=0;
             break;
         }
     }
     cout<<ans<<nl;
 }
}