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
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    string p="3141592653589793238462643383279";
    while(t--){
      string s;
      cin>>s;
      int nb=0;
        for (int i = 0; i <s.size() ; ++i) {
            if(s[i]!=p[i])
                break;
            nb++;
        }
        cout<<nb<<nl;
    }
}