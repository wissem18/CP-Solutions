#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 998244353;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    int cnt=0;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        sum+=a[i];
        if(a[i]==-1)
            cnt++;
    }
    if(sum>=0){
        if(cnt%2){
            cout<<1<<endl;
        }
        else
            cout<<0<<endl;
    }
    else{
        int ans=0;
        for (int i = 0; i < n; ++i) {
            if(sum>=0)
                break;
            if(a[i]==-1){
                ans++;
                sum+=2;
                cnt--;
            }
        }
        if(cnt%2){
            cout<<ans+1<<endl;
        }
        else
            cout<<ans<<endl;
    }
}
}