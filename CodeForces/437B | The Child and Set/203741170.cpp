#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int MOD = 998244353;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
int s,l;
cin>>s>>l;
vector<int>cntbits[20];
    for (int i = 1; i <=l ; ++i) {
        int x=__builtin_ctz(i);
        cntbits[x].push_back(i);
    }
    vector<int>ans;
    for (int i = 19; i >= 0; --i) {
        for (int j = 0; j < cntbits[i].size(); ++j) {
            if(s-(1<<i)>=0){
                ans.push_back(cntbits[i][j]);
                s-=(1<<i);
            }
            else
                break;
        }
    }
if(s==0){
    cout<<ans.size()<<endl;
    for (int i = 0; i < ans.size(); ++i) {
        cout<<ans[i]<<" ";
    }
}
else
    cout<<-1<<endl;
}