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
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int ans[2][n];
ans[0][0]=2*n;
ans[1][n-1]=2*n-1;
int i=2;
int j=2*n-2;
    for (int k = 1; k < n; ++k) {
        if(k%2){
            ans[0][k]=i;
            i+=2;
        }
        else{
            ans[0][k]=j;
            j-=2;
        }
    }
    i=1;
    j=2*n-3;
    for (int k = 0; k < n-1; ++k) {
        if(k%2==0){
            ans[1][k]=i;
            i+=2;
        }
        else{
            ans[1][k]=j;
            j-=2;
        }
    }
    for (int k = 0; k < 2; ++k) {
        for (int l = 0; l < n; ++l) {
            cout<<ans[k][l]<<" ";
        }
        cout<<endl;
    }
}
}