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
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int i=0,j=0,ans=0;
    multiset<int>s;
    while(i<n){
        s.insert(a[i]);
        int mn=*s.begin();
        int mx=*prev(s.end());
        while(mx-mn>1){
            s.erase(s.find(a[j]));
            mn=*s.begin();
            mx=*prev(s.end());
            j++;
        }
        i++;
        ans=max(ans,i-j);
 
    }
    cout<<ans<<nl;
}