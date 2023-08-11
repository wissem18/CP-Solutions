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
int n;
cin>>n;
int b[n-1];
    for (int i = 0; i < n-1; ++i) {
        cin>>b[i];
    }
    int a[n];
    a[0]=a[1]=b[0];
    for (int i = 2; i <n ; ++i) {
        a[i]=b[i-1];
        if(a[i]<a[i-1]){
            a[i-1]=a[i];
        }
    }
    for (int i = 0; i < n; ++i) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
}