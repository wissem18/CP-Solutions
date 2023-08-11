#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
 
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
set<int>lines;
    for (int i = 0; i < n; ++i) {
        int k;
        cin>>k;
        lines.insert(k);
    }
    vector<int>sr(lines.begin(),lines.end());
    for (int i = 0; i < m; ++i) {
        ll a,b,c;
        cin>>a>>b>>c;
        if(c<0){
            cout<<"NO"<<endl;
        }
        else{
            int x=sqrtl(4*a*c);
            if(x*1LL*x!=4*a*c)
                x++;
 
            int l= upper_bound(sr.begin(),sr.end(),b-x)-sr.begin();
            int r= lower_bound(sr.begin(),sr.end(),b+x)-sr.begin()-1;
            if(l<=r){
                cout<<"YES"<<endl;
                cout<<sr[l]<<endl;
            }
            else
                cout<<"NO"<<endl;
 
        }
    }
}
}