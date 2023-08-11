#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl='\n';
//double const pi= 3.141592653;
int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
string s[10];
    for (int i = 0; i < 10; ++i) {
        cin>>s[i];
    }
    int a,b,c,d;
    for (int i = 0; i < 10; ++i) {
        if(s[i].find('#')!=string::npos){
            a=i+1;
            break;
        }
    }
    for (int i = 9; i >= 0; --i) {
        if(s[i].find('#')!=string::npos){
            b=i+1;
            break;
        }
    }
    for (int i = 0; i < 10; ++i) {
        if(s[a-1][i]=='#'){
            c=i+1;
            break;
        }
    }
    for (int i = 9; i >=0; --i) {
        if(s[a-1][i]=='#'){
            d=i+1;
            break;
        }
    }
    cout<<a<<" "<<b<<nl;
    cout<<c<<" "<<d<<nl;
}