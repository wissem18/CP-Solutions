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
     int n,s1,s2;
     cin>>n>>s1>>s2;
     pi r[n];
        for (int i = 0; i < n; ++i) {
            cin>>r[i].first;
            r[i].second=i+1;
        }
        sort(r,r+n);
        vector<int>a,b;
        int l1=s1,l2=s2;
        for (int i = n-1; i >=0 ; --i) {
            if(l1<=l2){
                a.push_back(r[i].second);
                l1+=s1;
            }
            else{
              b.push_back(r[i].second);
              l2+=s2;
            }
        }
        cout<<a.size()<<" ";
        for (int i = 0; i <a.size() ; ++i) {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<b.size()<<" ";
        for (int i = 0; i <b.size() ; ++i) {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}