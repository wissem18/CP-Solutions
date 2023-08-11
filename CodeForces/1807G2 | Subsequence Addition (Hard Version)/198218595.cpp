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
ll c[n];
    for (int i = 0; i < n; ++i) {
        cin>>c[i];
    }
 
    sort(c,c+n);
    if(c[0]!=1)
        cout<<"NO"<<nl;
    else{
        ll mx=1;
        bool test=true;
        for (int i = 1; i <n ; ++i) {
            if(c[i]>mx){
                test=false;
                break;
            }
            mx+=c[i];
        }
        (test)?cout<<"YES"<<nl:cout<<"NO"<<nl;
    }
}
}