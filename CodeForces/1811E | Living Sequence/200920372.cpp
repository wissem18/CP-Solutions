#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
string convertintoBaseN(ll n,int base){
    {
        string r;
        while(n!=0) {r= to_string(n%base)+r; n/=base;}
        return r;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      string ans= convertintoBaseN(n,9);
        for (int i = 0; i < ans.size(); ++i) {
            if(ans[i]>='4')
                ans[i]++;
        }
      cout<<ans<<endl;
    }
}