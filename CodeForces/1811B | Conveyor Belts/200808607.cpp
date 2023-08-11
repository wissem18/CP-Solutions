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
    int n,x1,y1,x2,y2;
  cin>>n>>x1>>y1>>x2>>y2;
  int level1=min(min(x1,n-x1+1),min(y1,n-y1+1));
    int level2=min(min(x2,n-x2+1),min(y2,n-y2+1));
    cout<<abs(level1-level2)<<endl;
}
}