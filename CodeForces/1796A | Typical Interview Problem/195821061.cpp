#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl = '\n';
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 998244353;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
int t;
cin>>t;
string l="";
    for (int i = 1; i <=10000 ; ++i) {
        if(i%3==0)
            l+="F";
        if(i%5==0)
            l+="B";
    }
while(t--){
int k;
cin>>k;
string s;
cin>>s;
if(l.find(s)!=string::npos)
    cout<<"YES"<<nl;
else
    cout<<"NO"<<nl;
}
}