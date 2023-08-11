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
    string s,t;
    cin>>s>>t;
    int n=t.size();
    bool pre[n+1];
    memset(pre, false,sizeof pre);
    pre[0]= true;
    for (int i = 0; i < n; ++i) {
        if(s[i]!=t[i]&&t[i]!='?'&&s[i]!='?'){

            break;
        }
        pre[i+1]= true;
    }
    bool suf[n+1];
    memset(suf, false,sizeof suf);
    suf[n]=true;
    for (int i = 0; i < n; ++i) {
        if(s[s.size()-i-1]!=t[n-i-1]&&t[n-i-1]!='?'&&s[s.size()-i-1]!='?'){
            break;
        }
        suf[n-i-1]= true;
    }
    for (int i = 0; i <=n ; ++i) {
        if(pre[i]&&suf[i])
            cout<<"Yes"<<nl;
        else
            cout<<"No"<<nl;
    }
}