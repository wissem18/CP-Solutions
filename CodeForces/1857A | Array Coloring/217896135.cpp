 
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
        int a[n];
        int e=0,o=0;
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
            if(a[i]%2)
                o++;
            else
                e++;
        }
        if(o%2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
 
}
 
 