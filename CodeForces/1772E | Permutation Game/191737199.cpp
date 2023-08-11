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
  int n;
  cin>>n;
  int a[n];
     for (int i = 0; i < n; ++i) {
         cin>>a[i];
     }
    int x1=0,x2=0,x3=0;
     for (int i = 0; i < n; ++i) {
         if(a[i]!=i+1&&a[i]!=n-i)
             x3++;
         else if(a[i]!=i+1)
             x1++;
         else if(a[i]!=n-i)
             x2++;
 
     }
     if(x1+x3<=x2)
         cout<<"First"<<nl;
     else if(x2+x3<x1)
         cout<<"Second"<<nl;
     else
         cout<<"Tie"<<nl;
 }
}