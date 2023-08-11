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
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
       vector<int> occ(51,0);
       while(n--){
           int l,r;
           cin>>l>>r;
           if(l<=k&&r>=k){
               for (int i = l; i <=r ; ++i) {
                   occ[i]++;
               }
           }
       }
       bool test=true;
        for (int i = 1; i <=50 ; ++i) {
            if(i==k)
                continue;
            if(occ[i]==occ[k])
            {
                test=false;
                break;
            }
        }
        test?cout<<"YES"<<nl:cout<<"NO"<<nl;
    }
}