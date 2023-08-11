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
int n,a,b;
cin>>n>>a>>b;
int c[n];
    for (int i = 0; i < n; ++i) {
        cin>>c[i];
    }
    int ans=-1;
    for (int i = 0; i < n; ++i) {
        if(c[i]==a+b){
            ans=i+1;
            break;
        }
    }
    cout<<ans;
}