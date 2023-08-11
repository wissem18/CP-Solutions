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
 while(t--){
  int n;
  cin>>n;
  int a[n];
  int sum=0;
     for (int i = 0; i < n; ++i) {
         cin>>a[i];
         sum+=a[i];
     }
     bool test1=false;
     bool test2=false;
     for (int i = 0; i < n-1; ++i) {
         if(a[i]==a[i+1]&&a[i]==-1){
             test1=true;
             break;
         }
         if(a[i]*a[i+1]==-1){
             test2= true;
             false;
         }
     }
     if(test1)
         cout<<sum+4<<nl;
     else if(test2)
         cout<<sum<<nl;
     else
         cout<<sum-4<<nl;
 }
}