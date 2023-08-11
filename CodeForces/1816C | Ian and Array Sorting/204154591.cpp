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
ll a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
if(n==2){
    if(a[0]>a[1])
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
else{
    for (int i = 1; i <n-1; ++i) {
        if(a[i]<a[i-1]){
            ll d=a[i-1]-a[i];
            a[i]+=d;
           a[i+1]+=d;
        }
    }
    for (int i = n-2; i >0 ; --i) {
      if(a[i]>a[i+1]){
          ll d=a[i]-a[i+1];
          a[i]-=d;
          a[i-1]-=d;
      }
    }
    if(is_sorted(a,a+n,[](ll &x,ll &y){return x<y;}))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
}
}