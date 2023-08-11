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
    cin >> n;
    string s;
    cin>>s;
    string res="";
    for (int i = 0; i < n-1; ++i) {
        if(s[i]=='n'&&s[i+1]=='a'){
            res+="ny";
        }
        else{
            res+=s[i];
        }
    }
    res+=s[n-1];
    cout<<res<<nl;
}