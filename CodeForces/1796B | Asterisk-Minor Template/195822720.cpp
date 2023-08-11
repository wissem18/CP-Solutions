#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl = '\n';
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 998244353;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
int t;
cin>>t;
 
while(t--){
string a,b;
cin>>a>>b;
if(a[0]==b[0]) {
    cout<<"YES"<<nl;
    cout<<a[0]<<"*"<<nl;
}
else if(a[a.size()-1]==b[b.size()-1]){
    cout<<"YES"<<nl;
    cout<<"*"<<a[a.size()-1]<<nl;
}
else{
    bool test=false;
    for (int i = 0; i < a.size()-1; ++i) {
        for (int j = 0; j < b.size()-1; ++j) {
            if(a[i]==b[j]&&a[i+1]==b[j+1]){
                test= true;
                cout<<"YES"<<nl;
                cout<<"*"<<a[i]<<a[i+1]<<"*"<<nl;
                break;
            }
        }
        if(test)
            break;
    }
    if(!test)
        cout<<"NO"<<nl;
}
}
}