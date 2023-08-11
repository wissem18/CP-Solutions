 
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
   int x=(n*(n-1))/2;
   int b[x];
        for (int i = 0; i < x; ++i) {
            cin>>b[i];
        }
        sort(b,b+x);
        int pas=n-1;
        vector<int>a;
        for (int i = 0; i <x ; i+=pas,pas--) {
            a.push_back(b[i]);
 
        }
        a.push_back(b[x-1]);
        for (int i = 0; i < a.size(); ++i) {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
 
}
 
 