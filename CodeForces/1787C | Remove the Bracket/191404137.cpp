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
const int N=4*1e5+5;
int n,s;
int a[N];
ll mem[N][2];
vector<ll>ans;
ll dp(int i,int st){
    if(i==ans.size()-2){
        if(mem[i][st]!=-1)
            return mem[i][st];
        if(!st)
        return mem[i][st]=ans[i]*ans[i+1];
        return mem[i][st]=ans[i-1]*ans[i+1];
    }
    if(mem[i][st]!=-1)
        return mem[i][st];
    if(st==0)//not swap
        return mem[i][st]=min(ans[i]*ans[i+1]+dp(i+2,0),ans[i]*ans[i+2]+dp(i+2,1));
   else //swap
    return mem[i][st]=min(ans[i-1]*ans[i+1]+dp(i+2,0),ans[i-1]*ans[i+2]+dp(i+2,1));
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--) {
      cin>>n>>s;
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        ans.clear();
        ans.push_back(a[0]);
        for (int i = 1; i <n-1 ; ++i) {
            if(a[i]>s){
                ans.push_back(s);
                ans.push_back(a[i]-s);
            }
            else{
                ans.push_back(0);
                ans.push_back(a[i]);
            }
        }
        ans.push_back(a[n-1]);
        int x=ans.size()+1;
        memset(mem,-1,x*sizeof mem[0]);
        cout<<dp(0,0)<<nl;
    }
}