#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl = '\n';
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD =1e9+7;
bool cmp(pair<unordered_set<int>,int>&a,pair<unordered_set<int>,int>&b){
 
    return a.first.size()>b.first.size();
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    pair<unordered_set<int>,int>a[n+1];
        for (int i = 0; i < n; ++i) {
            int x[n-1];
            for (int j = 0; j < n-1; ++j) {
                cin>>x[j];
            }
            for (int j = 0; j < n-1; ++j) {
                for (int k = j; k <n-1 ; ++k) {
                    a[x[j]].first.insert(x[k]);
                    a[x[j]].second=x[j];
                }
            }
        }
        sort(a+1,a+n+1,cmp);
        for (int i = 1; i <=n; ++i) {
            cout<<a[i].second<<" ";
        }
        cout<<nl;
    }
}