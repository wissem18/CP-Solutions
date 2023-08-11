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
while(t--) {
int n,k;
cin>>n>>k;
int a[n+1];
    for (int i = 0; i < n; ++i) {
        a[i]=-1;
    }
    int x=n;
    int i=0;
    while(k){
        int c=min(x,k);
        a[i]=30;
        a[i+c]=(-31);
        k-=c;
        x--;
        i++;
    }
    for (int j = 0; j < n; ++j) {
        cout<<a[j]<<" ";
    }
    cout<<endl;
}
}