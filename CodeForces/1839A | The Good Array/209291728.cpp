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
    int n,k;
    cin>>n>>k;
    vector<int>a(n+1,0);
    for (int i = 1; i <=n ; i+=k) {
        a[i]=1;
    }
    int cnt=0;
    for (int i = 1; i <=n ; ++i) {
        if(a[i]==1)
            cnt++;
    }
    int cur=0;
    for (int i = n; i >=1 ; --i) {
        cur+=a[i];
        int x= ceil((n-i+1)*1.0/k);
        if(x>cur){
            cnt++;
            cur++;
        }
    }
    cout<<cnt<<endl;
}
}