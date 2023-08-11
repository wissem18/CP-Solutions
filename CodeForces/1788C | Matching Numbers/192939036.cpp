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
int sum(int x){
    string k= to_string(x);
    int ans=0;
    for (int i = 0; i < k.size(); ++i) {
        ans+=k[i]-'0';
    }
    return ans;
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
        if(n%2==0)
            cout<<"No"<<nl;
        else{
            cout<<"Yes"<<nl;
            int i=0;
            int j=1;
            while(2*(n-i)>n){
                cout<<j<<" "<<2*(n-i)<<nl;
                j++;
                i++;
            }
            int x=1;
            for (int k = j; k <=n ; ++k) {
                cout<<k<<" "<<2*n-x<<nl;
                x+=2;
            }
        }
     }
 
}