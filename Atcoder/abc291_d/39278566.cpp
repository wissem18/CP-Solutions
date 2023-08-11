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
const int N=2e5+5;
int n;
int a[N][2];
int mem[N][2];
int dp(int i,int x){
    if(i==n-1)
        return 1;
    if(mem[i][x]!=-1)
        return mem[i][x];
    int ans=0;
    if(a[i][x]!=a[i+1][0])
        ans=(ans+dp(i+1,0))%MOD;
    if(a[i][x]!=a[i+1][1])
        ans=(ans+dp(i+1,1))%MOD;
    return mem[i][x]=ans%MOD;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i][0]>>a[i][1];
    }
    memset(mem,-1, sizeof mem);
    cout<<(dp(0,0)+dp(0,1))%MOD;
}

