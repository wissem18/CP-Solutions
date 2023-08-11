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
 int t;
 cin>>t;
 while(t--) {
     int k,n;
     cin>>k>>n;
     int a[k];
     a[0]=1;
     for (int i = 1; i <k; ++i) {
        a[i]=a[i-1]+i;
     }
     int j=n;
     for (int i = k-1; i >=0 ; --i) {
         if(a[i]>j){
             a[i]=j;
             j--;
         }
         else
             break;
     }
     for (int i = 0; i < k; ++i) {
         cout<<a[i]<<" ";
     }
     cout<<nl;
 }
}