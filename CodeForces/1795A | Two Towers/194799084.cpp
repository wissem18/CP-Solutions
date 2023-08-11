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
        int n,m;
        cin>>n>>m;
        string x,c;
        cin>>x>>c;
        int nb=0;
        int a=0;
        for (int i = 1; i < n; ++i) {
            if(x[i-1]==x[i]){
                nb++;
                a=1;
            }
        }
        for (int i = 1; i < m; ++i) {
            if(c[i-1]==c[i]){
                nb++;
                a=2;
            }
        }
        if(nb>1)
            cout<<"NO"<<nl;
        else{
            if(nb==0)
                cout<<"YES"<<nl;
            else{
                if(x[n-1]!=c[m-1])
                    cout<<"YES"<<nl;
                else
                    cout<<"NO"<<nl;
            }
 
        }
    }
}