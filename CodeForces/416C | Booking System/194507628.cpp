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
  int n;
  cin>>n;
  pi a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i].first>>a[i].second;
    }
    int k;
    cin>>k;
    int r[k];
    for (int i = 0; i < k; ++i) {
        cin>>r[i];
    }
    vector<int>ind(n);
    iota(ind.begin(),ind.end(),0);
    sort(ind.begin(),ind.end(),[&a](int i,int j){
        if(a[i].second==a[j].second)
            return a[i].first<a[j].first;
        return a[i].second>a[j].second;
    });
    int tot=0;
    vector<pi>res;
    bool vis[k];
    memset(vis,false,sizeof vis);
    for (int i = 0; i < n; ++i) {
        int table=-1;
        int mx=1e9;
        for (int j = 0; j < k; ++j) {
           if(r[j]>=a[ind[i]].first&&r[j]<mx&&!vis[j]){
               table=j;
           mx=r[j];
           }
        }
        if(table!=-1){
            tot+=a[ind[i]].second;
            vis[table]=true;
            res.push_back({ind[i]+1,table+1});
        }
 
    }
    cout<<res.size()<<" "<<tot<<nl;
    for (int i = 0; i < res.size(); ++i) {
        cout<<res[i].first<<" "<<res[i].second<<nl;
    }
}