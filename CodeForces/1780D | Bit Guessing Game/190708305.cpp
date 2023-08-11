#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl = '\n';
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD =1e9+7;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int cnt;
        cin>>cnt;
        int ans=0;
        int i=1;
        while(cnt){
            cout<<"- "<<i<<nl;
            cout.flush();
            int x;
            cin>>x;
            int r=x-(cnt-1);//the last significant bit
            ans+=(1<<r);
            i=(1<<r);
            cnt--;
        }
        cout<<"! "<<ans<<nl;
        cout.flush();
    }
}