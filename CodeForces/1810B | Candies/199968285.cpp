#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
vector<vector<int>>psa;
int R;
int C;
map<vector<int>,int>mem;
int dp(int i,int j,int k,vector<string>& pizza){
    if(i==R-1&&j==C-1)
    {
        if(k==1&&(psa[R][C]-psa[i-1][j-1])>0)
            return 1;
        else
            return 0;
 
    }
    if(k==1){
        if((psa[R][C]-psa[i-1][j-1])>0)
            return 1;
        else
            return 0;
    }
    if(mem.count({i,j,k}))
        return mem[{i,j,k}];
    int ans=0;
    for (int l = i+1; l < R; ++l) {
        ans=(ans+dp(l,j,k-1,pizza))%MOD;
    }
    for (int l = j+1; l < C; ++l) {
        ans=(ans+dp(i,l,k-1,pizza))%MOD;
    }
    return mem[{i,j,k}]=ans;
}
int ways(vector<string>& pizza, int k) {
     R=pizza.size();
     C=pizza[0].size();
    psa.assign(R+1,vector<int>(C+1,0));
    psa[1][1] = (pizza[0][0]=='A');
    for (int i = 2; i <= C; i++)
        psa[1][i] = psa[0][i - 1] + (pizza[0][i-1]=='A');
    for (int i = 2; i <= R; i++)
        psa[i][1] = psa[i - 1][0] + (pizza[i-1][0]=='A');
 
    for (int i = 2; i <= R; i++) {
        for (int j = 2; j <= C; j++)
            psa[i][j] = psa[i - 1][j] + psa[i][j - 1]
                        - psa[i - 1][j - 1] + (pizza[i-1][j-1]=='A');
    }
    return dp(0,0,k,pizza);
}
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
      if(n%2==0)
          cout<<-1<<endl;
      else{
          string ans="";
          while(n>1){
              n/=2;
              if(n%2){
                  ans+='2';
              }
              else{
                  n++;
                  ans+='1';
              }
          }
          reverse(ans.begin(),ans.end());
          cout<<ans.size()<<endl;
          for (int i = 0; i < ans.size(); ++i) {
              cout<<ans[i]<<" ";
          }
          cout<<endl;
      }
  }
}