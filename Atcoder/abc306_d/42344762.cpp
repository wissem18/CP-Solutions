#include "bits/stdc++.h"

using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 998244353;
const int N=3*1e5+5;
int x[N];
int y[N];
ll mem[N][2];
int n;
ll dp(int i,int state){
    if(i==n)
        return 0;
    if(mem[i][state]!=-1)
        return mem[i][state];
    if(!state){
        if(x[i])
        return mem[i][state]=max(dp(i+1,1)+y[i],dp(i+1,0));
        else
            return mem[i][state]=max(dp(i+1,0)+y[i],dp(i+1,0));
    }
    else{
        if(x[i])
            return mem[i][state]=dp(i+1,1);
        else
            return mem[i][state]=max(dp(i+1,0)+y[i],dp(i+1,1));
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>x[i]>>y[i];
    }
    for (int i = 0; i <= n+1; ++i) {
        for (int j = 0; j < 2; ++j) {
            mem[i][j]=-1;
        }
    }
    cout<<dp(0,0);
}