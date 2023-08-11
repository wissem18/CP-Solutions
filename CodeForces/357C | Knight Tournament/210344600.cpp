#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n,m;
    cin>>n>>m;
    vector<int>ans(n+1,0);
    set<int>knights;
    for (int i = 1; i <=n ; ++i) {
        knights.insert(i);
    }
    for (int i = 0; i < m; ++i) {
        int l,r,x;
        cin>>l>>r>>x;
        vector<int>er;
        auto it= knights.lower_bound(l);
        while(it!=knights.end()){
            int cur=*it;
            if(cur>r)
                break;
            if(cur!=x){
                ans[cur]=x;
                er.push_back(cur);
            }
            it++;
        }
        for (auto e:er) {
         knights.erase(e);
        }
    }
    for (int i = 1; i <=n ; ++i) {
        cout<<ans[i]<<" ";
    }
  }