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
    int t;
    cin >> t;
    while (t--) {
     int n,k;
     cin>>n>>k;
     string s;
     cin>>s;
     vector<pi>occ(26,{0,0});
        for (int i = 0; i < n; ++i) {
            if(s[i]-'a'>=0&&s[i]-'a'<26){
                occ[s[i]-'a'].first++;
            }
            else{
                occ[s[i]-'A'].second++;
            }
        }
        int ans=0;
        for (int i = 0; i < 26; ++i) {
            ans+=min(occ[i].first,occ[i].second);
            ans+=min(k,abs(occ[i].first-occ[i].second)/2);
            k-=min(k,abs(occ[i].first-occ[i].second)/2);
        }
        cout<<ans<<nl;
    }
}
 