#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl = '\n';
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    int a[n];
    vector<int>f,s;
    ll sf=0,ss=0;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        if(a[i]>0){
            f.push_back(a[i]);
            sf+=a[i];
        }
        else {
            s.push_back(-a[i]);
            ss-=a[i];
        }
    }
    if(sf>ss)
        cout<<"first";
    else if(ss>sf)
        cout<<"second";
    else{
        for (int i = 0; i < min(s.size(),f.size()); ++i) {
           if(f[i]>s[i]){
               cout<<"first";
               return 0;
           }
           else if(f[i]<s[i]){
               cout<<"second";
               return 0;
           }
        }
        if(f.size()>s.size()){
            cout<<"first";
            return 0;
        }
        else if(f.size()<s.size()){
            cout<<"second";
            return 0;
        }
        else{
            if(a[n-1]>0)
                cout<<"first";
            else
                cout<<"second";
        }
    }
    }