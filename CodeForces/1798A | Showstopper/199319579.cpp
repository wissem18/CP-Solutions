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
    cin >> t;
    while (t--) {
      int n;
      cin>>n;
      int a[n];
      int b[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin>>b[i];
        }
      int mx=max(*max_element(a,a+n),*max_element(b,b+n));
        if(mx==a[n-1]){
            for (int i = 0; i < n; ++i) {
                if(b[i]>a[i])
                    swap(a[i],b[i]);
            }
            if(*max_element(b,b+n)==b[n-1]){
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else if(mx==b[n-1]){
            for (int i = 0; i < n; ++i) {
                if(b[i]<a[i])
                    swap(a[i],b[i]);
            }
            if(*max_element(a,a+n)==a[n-1]){
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}