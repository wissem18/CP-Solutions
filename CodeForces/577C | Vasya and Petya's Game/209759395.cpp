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
string s;
ll dp(int i,int mx,int k){
   if(i<0)
       return 0;
    if(mem[i][mx][k]!=-1)
        return mem[i][mx][k];
    int x=s[i]-'A';
    ll ans=dp(i-1,max(mx,x),k)+(p[x]*((x>=mx)?1:-1));
    if(!k){
        for (int j = 0; j <5; ++j) {
            if(j==x)
                continue;
            if(j<mx)
            ans=max(ans,dp(i-1,max(mx,j),1)-p[j]);
            else
                ans=max(ans,dp(i-1,max(mx,j),1)+p[j]);
        }
    }
    return mem[i][mx][k]=ans;
}
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    set<int>st;
    vector<int> ans;
    for (int i = 2; i <=n ; ++i) {
             if(st.size()==n-1)
                 break;
             if(st.count(i))
                 continue;
             ans.push_back(i);
        vector<int>add;
        add.push_back(i);
        for (auto x:st) {
          if(lcm(x,i)<=n)
              add.push_back(lcm(x,i));
        }
        for (auto x:add) {
          st.insert(x);
        }
    }
    cout<<ans.size()<<endl;
    for (auto x:ans) {
      cout<<x<<" ";
    }
}