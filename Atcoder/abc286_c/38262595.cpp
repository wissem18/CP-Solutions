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
pi a[55];
int n,x;
int mem[55][10005];
bool dp(int i,int v){
    if(v<0)
        return false;
    if(i==n){
        if(v==0)
            return true;
        else
            return false;
    }
    if(mem[i][v]!=-1)
        return mem[i][v];
    bool res=false;
    for (int j = 0; j <=a[i].second; ++j) {
       res|=dp(i+1,v-j*a[i].first);
    }
    return mem[i][v]=res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    cin >> n>>x;

    for (int i = 0; i < n; ++i) {
        cin>>a[i].first>>a[i].second;
    }
    memset(mem,-1,sizeof mem);
    if(dp(0,x))
        cout<<"Yes";
    else
        cout<<"No";

}