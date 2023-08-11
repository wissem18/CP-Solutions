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
string x;
cin>>x;
int n=x.size();
int m;
cin>>m;
vector<int>cnt(n+2,0);
while(m--){
    int a;
    cin>>a;
    cnt[a]++;
    cnt[n-a+2]--;
}
    for (int i = 1; i <=n ; ++i) {
        cnt[i]+=cnt[i-1];
    }
    for (int i = 1; i <=n/2 ; ++i) {
       if(cnt[i]%2){
           swap(x[i-1],x[n-i]);
       }
    }
    cout<<x;
}