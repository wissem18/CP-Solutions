#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl = '\n';
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD =1e9+7;
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
        vector<int>even,odd;
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
            if(a[i]%2)
                odd.push_back(i+1);
            else
                even.push_back(i+1);
        }
     if(odd.size()>=3){
         cout<<"YES"<<nl;
         cout<<odd[0]<<" "<<odd[1]<<" "<<odd[2]<<nl;
     }
     else if(odd.empty()){
         cout<<"NO"<<nl;
     }
     else{
         if(even.size()>=2){
             cout<<"YES"<<nl;
             cout<<odd[0]<<" "<<even[0]<<" "<<even[1]<<nl;
         }
         else{
             cout<<"NO"<<nl;
         }
     }
    }
}