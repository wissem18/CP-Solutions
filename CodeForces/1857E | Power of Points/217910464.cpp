 
#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
double const pi = 3.141592653;
vector<int> dx = {0, 1, 0, -1};
vector<int> dy = {1, 0, -1, 0};
int MOD = 1e9 + 7;
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        ll sum=0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum+=a[i];
        }
       vector<pair<ll,int>>p;
        for (int i = 0; i < n; ++i) {
            p.push_back({a[i],i});
        }
        sort(p.begin(),p.end());
        ll ans[n];
        ans[p[0].second]=sum-n*(p[0].first-1);
        ll cur=p[0].first;
        for (int i = 1; i <n ; ++i) {
            ll cursum=sum-cur;
            ans[p[i].second]=cursum-(n-i)*1LL*(p[i].first-1)+abs(cur-((p[i].first+1)*1LL*i));
            cur+=p[i].first;
        }
        for (int i = 0; i < n; ++i) {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
 
}
 
 