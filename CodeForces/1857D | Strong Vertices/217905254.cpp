 
#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
double const pi = 3.141592653;
vector<int> dx = {0, 1, 0, -1};
vector<int> dy = {1, 0, -1, 0};
int MOD = 1e9 + 7;
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
   int n;
   cin>>n;
    int a[n],b[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin>>b[i];
        }
    int c[n];
        for (int i = 0; i < n; ++i) {
            c[i]=a[i]-b[i];
        }
        int mx=*max_element(c,c+n);
        vector<int>ans;
        for (int i = 0; i < n; ++i) {
            if(c[i]==mx)
                ans.push_back(i+1);
        }
        cout<<ans.size()<<endl;
        for (int i = 0; i < ans.size(); ++i) {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
 
}
 
 