 
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
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[0]==a[n-1])
        cout<<-1<<endl;
    else{
        vector<int>b,c;
        for (int i = n-1; i >=0; --i) {
            if(a[i]==a[n-1])
                c.push_back(a[i]);
            else
                b.push_back(a[i]);
        }
        cout<<b.size()<<" "<<c.size()<<endl;
        for (int i = 0; i < b.size(); ++i) {
            cout<<b[i]<<" ";
        }
        cout<<endl;
        for (int i = 0; i < c.size(); ++i) {
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
}
}
 
 
 