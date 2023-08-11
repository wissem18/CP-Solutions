#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int MOD = 1e9+7;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
   int n;
   cin>>n;
   int a[n], b[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i]>>b[i];
    }
    int i=0,j=0;
    while(i+j<n){
        if(a[i]<b[j]){
            i++;
        }
        else
            j++;
    }
    string x="",y="";
    for (int k = 0; k < max(i,n/2); ++k) {
        x+='1';
    }
    for (int k = max(i,n/2); k <n ; ++k) {
        x+='0';
    }
    for (int k = 0; k < max(j,n/2); ++k) {
        y+='1';
    }
    for (int k = max(j,n/2); k <n ; ++k) {
        y+='0';
    }
    cout<<x<<endl;
    cout<<y;
}