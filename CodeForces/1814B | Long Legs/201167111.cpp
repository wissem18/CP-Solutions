#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
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
    int a,b;
    cin>>a>>b;
    if(a>b)
        swap(a,b);
    int ans=1e9;
    for (int i = 1; i*i<=2*1e9; ++i) {
        ans=min(ans,i-1+(a+i-1)/i+(b+i-1)/i);
    }
    cout<<ans<<endl;
}
}