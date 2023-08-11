#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
ll xd=1000000000000;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int n=s.size();
if(n==1)
    cout<<0<<endl;
else{
    int cnt0[n+1];
    cnt0[0]=0;
    for (int i = 0; i < n; ++i) {
        cnt0[i+1]=cnt0[i]+(s[i]=='0');
    }
    ll ans=1e18;
    for (int i = 0; i < n-1; ++i) {
        ll cur=0;
        if(s[i]=='1'&&s[i+1]=='0')
            cur+=xd;
        ll k=i-cnt0[i]+cnt0[n]-cnt0[i+2];
        cur+=k*xd+k;
        ans=min(cur,ans);
    }
    cout<<ans<<endl;
}
}
}