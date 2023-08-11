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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
ll l,n1,n2;
cin>>l>>n1>>n2;
pair<int,ll>a[n1],b[n2];
    for (int i = 0; i < n1; ++i) {
        cin>>a[i].first>>a[i].second;
    }
    for (int i = 0; i < n2; ++i) {
        cin>>b[i].first>>b[i].second;
    }
    map<int,vector<pair<ll,ll>>>m;
    ll s=1;
    for (int i = 0; i <n1 ; ++i) {
        m[a[i].first].push_back({s,s+a[i].second-1});
        s+=a[i].second;
    }
    s=1;
    ll ans=0;
    for (int i = 0; i <n2 ; ++i) {
        m[b[i].first].push_back({s,s+b[i].second-1});
//        for (auto x:m[b[i].first]) {
//            if(x.first>s+b[i].second-1)
//                break;
//            ans+=max(0LL,min(s+b[i].second-1,x.second)-max(s,x.first)+1);
//        }
        s+=b[i].second;
    }

    for (auto x:m) {
        sort(x.second.begin(),x.second.end());
        ll mxr=x.second[0].second;
        for (int i = 0; i < x.second.size()-1; ++i) {
                ans+=max(0LL,min(mxr,x.second[i+1].second)-x.second[i+1].first+1);
            mxr=max(mxr,x.second[i+1].second);
        }
    }
    cout<<ans<<nl;
}
