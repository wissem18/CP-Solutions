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
int x[k],c[k];
    for (int i = 0; i < k; ++i) {
        cin>>x[i];
    }
    for (int i = 0; i < k; ++i) {
        cin>>c[i];
    }
    if(c[0]>x[0]){
        cout<<"NO"<<endl;
    }
    else{
        string s="";
        for (int i = 0; i < c[0]-3; ++i) {
            s+='a';
        }
        int ind=0;
        for (int i =c[0]-3; i <x[0] ; ++i) {
            s+=char('a'+ind);
            ind=(ind+1)%3;
        }
        bool test=true;
        for (int i = 1; i < k; ++i) {
            int dx=x[i]-x[i-1];
            int dc=c[i]-c[i-1];
            if(dc>dx||c[i]>x[i]){
                test=false;
                break;
            }
            for (int j = 0; j < dc; ++j) {
                s+=char('c'+i);
            }
            for (int j = dc; j <dx ; ++j) {
                s+=char('a'+ind);
                ind=(ind+1)%3;
            }
        }
        if(test){
        cout<<"YES"<<endl;
        cout<<s<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    }
 
}