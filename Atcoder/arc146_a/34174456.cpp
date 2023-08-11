#include "bits/stdc++.h"
using namespace std;
#define ll long long
const char nl='\n';
double const pi= 3.141592653;
int dx[] = { 0, 0, -1, -1, -1, 1, 1, 1 };
int dy[] = { -1, 1, 0, -1, 1, -1, 1, 0 };
ll MOD=1e9+7;
bool sortby(string a,string b){
    if(a.length()==b.length()){
        int x=stoi(a),y=stoi(b);
        return(x<y);
    }
    else if(a.length()<b.length()){
        int x=stoi(a),y=stoi(b);
        y/=(pow(10,b.length()-a.length()));
        return(x<y);
    }
    else{
        int x=stoi(a),y=stoi(b);
        x/=(pow(10,a.length()-b.length()));
        return(x<y);
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
int n;
cin>>n;
int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    sort(a,a+n);
    string res[3]={to_string(a[n-1]),to_string(a[n-2]),to_string(a[n-3])};
    sort(res,res+3,sortby);
    string ans="";
    for (int i = 2; i >=0 ; --i) {
        ans+=res[i];
    }
    cout<<ans;
}