#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
vector<int>mem;
int dp(int n,int a,int b,int c){
    if(n==0)
        return 0;
    if(mem[n]!=-1)
        return mem[n];
    int ans=0;
    if(n-a>=0)
        ans=max(ans,1+dp(n-a,a,b,c));
    if(n-b>=0)
        ans=max(ans,1+dp(n-b,a,b,c));
    if(n-c>=0)
        ans=max(ans,1+dp(n-c,a,b,c));
    if(!ans)
        ans= INT_MIN;
return mem[n]=ans;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
   // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    mem.assign(n+1,-1);
    cout<<dp(n,a,b,c);
}