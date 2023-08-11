#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
vector<int>p={1,10,100,1000,10000};
ll mem[200005][5][2];
ll dp(int i,int mx,int k,string &s){
   if(i<0)
       return 0;
    if(mem[i][mx][k]!=-1)
        return mem[i][mx][k];
    int x=s[i]-'A';
    ll ans=dp(i-1,max(mx,x),k,s)+(p[x]*((x>=mx)?1:-1));
    if(!k){
        for (int j = 0; j <5; ++j) {
            if(j==x)
                continue;
            if(j<mx)
            ans=max(ans,dp(i-1,max(mx,j),1,s)-p[j]);
            else
                ans=max(ans,dp(i-1,max(mx,j),1,s)+p[j]);
        }
    }
    return mem[i][mx][k]=ans;
}
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
         int n=s.size();
        for (int i = 0; i <n ; ++i) {
            for (int j = 0; j < 5; ++j) {
                for (int k = 0; k <2 ; ++k) {
                    mem[i][j][k]=-1;
                }
            }
        }
        cout<<dp(n-1,0,0,s)<<endl;
    }
}