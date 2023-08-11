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
    int t=1;
    //cin>>t;
    while(t--)
    {
      int n,q;
      cin>>n>>q;
      vector<int>yellow(n+1,0),red(n+1,0);
      while(q--){
          int type,x;
          cin>>type>>x;
          if(type==1){
              yellow[x]++;
          }
          if(type==2){
             red[x]++;
          }
          if(type==3){
            if(red[x]||yellow[x]>1)
                cout<<"Yes"<<nl;
            else
                cout<<"No"<<nl;
          }
      }
    }
}
