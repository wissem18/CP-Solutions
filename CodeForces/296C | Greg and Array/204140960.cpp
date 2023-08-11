#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int MOD = 998244353;
double average(vector<int>& salary) {
    int mx=0,mn=1e9;
    int sum=0;
    for (int i = 0; i < salary.size(); ++i) {
        mx=max(mx,salary[i]);
        mn=min(mn,salary[i]);
        sum+=salary[i];
    }
    sum-=(mx+mn);
    double ans=sum*1.0/salary.size()-2;
    return ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
int n,m,k;
cin>>n>>m>>k;
int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    vector<int>op[m];
    for (int i = 0; i < m; ++i) {
        int l,r,d;
        cin>>l>>r>>d;
         op[i]={l,r,d};
    }
    vector<int>nbop(m+1,0);
    while(k--){
        int x,y;
        cin>>x>>y;
        x--,y--;
        nbop[x]++;
        nbop[y+1]--;
    }
    for (int i = 1; i <=m ; ++i) {
        nbop[i]+=nbop[i-1];
    }
    vector<ll>b(n+1,0);
    for (int i = 0; i < m; ++i) {
        b[op[i][0]-1]+=nbop[i]*1LL*op[i][2];
        b[op[i][1]]-=nbop[i]*1LL*op[i][2];
    }
    for (int i = 1; i < n; ++i) {
        b[i]+=b[i-1];
    }
    for (int i = 0; i < n; ++i) {
        cout<<a[i]+b[i]<<" ";
    }
}