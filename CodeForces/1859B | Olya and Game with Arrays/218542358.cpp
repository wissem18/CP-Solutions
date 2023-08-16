 
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
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>mn,mn2;
    for (int i = 0; i < n; ++i) {
        int m;
        cin>>m;
        vector<int>a;
        for (int j = 0; j < m; ++j) {
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        mn.push_back(a[0]);
        mn2.push_back(a[1]);
    }
    ll ans=0;
    sort(mn.begin(),mn.end());
    sort(mn2.begin(),mn2.end());
    ans+=mn[0];
    for (int i = 1; i <mn2.size() ; ++i) {
        ans+=mn2[i];
    }
    cout<<ans<<endl;
}
}
 
 
 