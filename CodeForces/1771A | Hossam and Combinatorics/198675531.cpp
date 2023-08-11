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
        ll n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        int mx=*max_element(a,a+n);
        int mn=*min_element(a,a+n);
        if(mx==mn){
            cout<<n*(n-1)<<endl;
        }
        else{
        ll x=0,y=0;
        for (int i = 0; i < n; ++i) {
            if(a[i]==mn)
                x++;
            if(a[i]==mx)
                y++;
        }
        cout<<x*y*2<<endl;
    }
    }
}