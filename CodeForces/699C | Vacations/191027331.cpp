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
int n;
int a[100];
int dp[105][5];
int minRest(int i,int prev){
    if(i==n)
        return 0;
    if(dp[i][prev]!=-1)
        return dp[i][prev];
    if(a[i]==0)
        return dp[i][prev]=(minRest(i+1,0)+1);
    if(a[i]==1){
        if(prev==1)
            return dp[i][prev]=(minRest(i+1,0)+1);
        return dp[i][prev]=(minRest(i+1,1));
    }
    if(a[i]==2){
        if(prev==2)
            return dp[i][prev]=(minRest(i+1,0)+1);
        return dp[i][prev]=(minRest(i+1,2));
    }
    if(a[i]==3){
        if(prev==1){
            return dp[i][prev]=(minRest(i+1,2));
        }
        if(prev==2){
            return dp[i][prev]=(minRest(i+1,1));
        }
        return dp[i][prev]=(min(minRest(i+1,1),minRest(i+1,2)));
    }
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    memset(dp,-1,sizeof dp);
    cout<<minRest(0,0);
}