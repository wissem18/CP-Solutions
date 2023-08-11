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
    int a,b;
    cin>>a>>b;
    cout<<2<<endl;
    cout<<1<<" "<<b-1<<endl;
    cout<<a<<" "<<b<<endl;
}
}