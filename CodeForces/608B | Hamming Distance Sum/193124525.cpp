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
    string a,b;
    cin>>a>>b;
    int pre[b.size()+2];
    pre[0]=0;
    for (int i = 0; i < b.size(); ++i) {
        pre[i+1]=pre[i]+(b[i]=='1');
    }
    ll ans=0;
    for (int i = 0; i < a.size(); ++i) {
        if(a[i]=='0'){
            ans+=pre[b.size()-a.size()+1+i]-pre[i];
        }
        else{
            ans+=b.size()-a.size()+1-(pre[b.size()-a.size()+1+i]-pre[i]);
        }
    }
cout<<ans;
}