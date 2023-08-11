#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        int i=0;
        ll sum=0;
        int ans=0;
        while(i<n){
            sum+=abs(a[i]);
          if(a[i]<0){
              int j=i+1;
              ans++;
              while(j<n&&a[j]<=0){
                  sum+=abs(a[j]);
                  j++;
              }
              i=j-1;
          }
          i++;
        }
        cout<<sum<<" "<<ans<<endl;
    }
  }