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
        pair<int,int>a[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i].first>>a[i].second;
        }
        sort(a,a+n,[](pair<int,int>&a,pair<int,int>&b){
            if(a.first==b.first)return a.second>b.second;
            return a.first<b.first;
        });
        ll ans=0;
       int i=0;
       while(i<n){
           int x=a[i].first;
           int j=i;
           while(j<n&&j-i<x&&a[j].first==x){
               ans+=a[j].second;
               j++;
           }
           while(j<n&&a[j].first==x)
               j++;
           i=j;
       }
        cout<<ans<<endl;
    }
}