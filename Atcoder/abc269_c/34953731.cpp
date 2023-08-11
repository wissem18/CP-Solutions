#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl='\n';
//double const pi= 3.141592653;
int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
ll n;
cin>>n;
vector<int>pos;
    for (int i = 0; i <=log2(n) ; ++i) {
        ll a=pow(2,i);
        if((n&a)){
            pos.push_back(i);
        }
    }
    vector<ll>ans;
    int sz=(1<<pos.size());
    for (int i = 0; i < sz; ++i) {
        ll x=0;
        for (int j = 0; j < pos.size(); ++j) {
            if(i&(1<<j)){
             ll a=pow(2,pos[j]);
             x+=a;
            }
        }
        ans.push_back(x);
    }
    sort(ans.begin(),ans.end());
    for (int i = 0; i < ans.size(); ++i) {
        cout<<ans[i]<<nl;
    }
}