#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int MOD = 998244353;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
if(k==0){
 if(n==2){
     cout<<"YES"<<endl;
     cout<<1<<" "<<-1<<endl;
 }
 else
     cout<<"NO"<<endl;
}
else {
    vector<int>a(n,1);
    int x=n*(n-1)/2;
    bool test= false;
    for (int i = 0; i <n-1 ; ++i) {
        if(x==k){
            test=true;
            break;
        }
        a[i]=-1;
        x=(n-i-1)*(n-i-2)/2+i*(i+1)/2;
    }
    if(test){
        cout<<"YES"<<endl;
        for (int i = 0; i < n; ++i) {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else
        cout<<"NO"<<endl;
}
}
}