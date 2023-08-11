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
ll bs(int a,int b,ll h){
    ll l=1;
    ll r=h/(a-b)+1;
    while(l<r){
        ll mid=(l+r)/2;
        ll curh=(a-b)*1LL*(mid-1)+a;
        if(curh>=h)
            r=mid;
        else
            l=mid+1;
    }
    return l;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
  int t;
  cin>>t;
  while(t--){
     int q;
     cin>>q;
     ll hmn=0,hmx=1e18;
     while(q--){
         int type;
         cin>>type;
         if(type==1){
             int a,b,n;
             cin>>b>>a>>n;
 
             ll newhmx=(b-a)*1LL*(n-1)+b;
             ll newhmn=newhmx-(b-a)+1;
             if(n==1){
                  newhmx=b;
                  newhmn=1;
             }
             if((newhmx<hmn||newhmn>hmx)&&hmn!=0)
                 cout<<0<<" ";
             else
             {
                 cout<<1<<" ";
                 hmx=min(hmx,newhmx);
                 hmn=max(hmn,newhmn);
             }
         }
         else{
            int a,b;
            cin>>a>>b;
            ll x1=bs(a,b,hmx);
            ll x2=bs(a,b,hmn);
            if(x1==x2)
                cout<<x1<<" ";
            else
                cout<<-1<<" ";
         }
     }
     cout<<endl;
  }
}