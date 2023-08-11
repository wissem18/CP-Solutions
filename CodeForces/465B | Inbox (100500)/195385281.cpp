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
int n;
cin>>n;
int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int ans=0;
    int i=0;
    int nb=0;
    while(i<n){
        if(a[i]==1){
            nb++;
            int j=i+1;
            while(j<n&&a[j]==a[i]){
                j++;
            }
            ans+=j-i-1;
            i=j;
        }
        else{
            i++;
        }
    }
    if(nb)
    ans+=2*nb-1;
    cout<<ans<<nl;
}
 