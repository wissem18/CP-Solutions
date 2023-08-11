#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl = '\n';
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9+7;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    vector<string>a;
        for (int i = 0; i < 2*n-2; ++i) {
            string s;
            cin>>s;
            a.push_back(s);
        }
        int x=0;
        string v,w;
        for (int i = 0; i <a.size() ; ++i) {
            if(a[i].size()==n-1&&!x){
                v=a[i];
                x++;
            }
            else if(a[i].size()==n-1&&x)
                w=a[i];
 
        }
        reverse(v.begin(),v.end());
        (v==w)?cout<<"YES"<<nl:cout<<"NO"<<nl;
    }
}